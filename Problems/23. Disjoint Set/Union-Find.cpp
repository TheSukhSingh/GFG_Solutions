class Solution
{
    public:
    //Function to merge two nodes a and b.
    int findUParent(int par[],int ind){
        if(par[ind]==ind){
            return ind;
        }
        return par[ind]=findUParent(par,par[ind]);
    }
    //Function to merge two nodes a and b.
    void union_( int a, int b, int par[], int rank1[]) 
    {
        //code here
        int aparent = findUParent(par,a);
        int bparent = findUParent(par,b);
        if(aparent==bparent){
            return;
        }
        if(rank1[aparent]<=rank1[bparent]){
            par[aparent]=bparent;
            rank1[bparent]+=rank1[aparent];
        }
        else{
            par[bparent]=aparent;
            rank1[aparent]+=rank1[bparent];
        }
    }
    
    //Function to check whether 2 nodes are connected or not.
    bool isConnected(int x,int y, int par[], int rank1[])
    {
        //code here
        return (findUParent(par,x)==findUParent(par,y));
    }
};