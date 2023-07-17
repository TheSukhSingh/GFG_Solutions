struct Edge{
    int src,dst;
    long long int wt;
    Edge(int s, int d, long long int w){
        src=s;
        dst=d;
        wt=w;
    }
};
bool cmp(struct Edge &e1, struct Edge &e2){
    return e1.wt<e2.wt;
}
// using
// 1. Union by rank - union keeping height as low as possible
// 2. path compression - reordering the parent array
// which makes the amortized TC as O(1)
// find function which uses path compression
int find(int x, int par[]){
    if(x==par[x])   return x;
    par[x]=find(par[x],par);
    return par[x];
}
// union finction which uses union by rank
void union_(int a, int b, int par[], int rank[]){
    int x=find(a,par);
    int y=find(b,par);
    if(rank[x]<rank[y])
        par[x]=y;
    else if(rank[x]>rank[y])
        par[y]=x;
    else{
        par[y]=x;
        rank[x]++;
    }
}
//Function to find the minimum spanning tree value using Kruskal.
long long int kruskalDSU(vector<pair<int, long long int>> adj[], int n, int m){
    // to represent edges in form of {wt,src,dst}
    vector<struct Edge> adjE;
    for(int i=0;i<n;i++){
        for(auto u: adj[i]){
            if(i<u.first){
                Edge k(i,u.first,u.second);
                adjE.push_back(k);
            }
        }
    }
    int par[n+1];
    int rank[n+1];
    for(int i=1;i<=n;i++){
        par[i]=i;
        rank[i]=1;
    }
    int res=0;
    sort(adjE.begin(),adjE.end(),cmp);
    for(int i=0,s=0;s<n-1;i++){
        Edge e=adjE[i];
        int x=find(e.src,par);
        int y=find(e.dst,par);
        if(x!=y){
            res+=e.wt;
            union_(x,y,par,rank);
            s++;
        }
    }
    return res;
}