class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        map<int,int>m;
        for(int i=0;i<N;i++){
            if(m.find(A1[i])==m.end()){
                m.insert({A1[i],1});
            }
            else{
                m[A1[i]]++;
            }
        }
        vector<int>v;
        for(int i=0;i<M;i++){
            for(int j=0;j<m[A2[i]];j++){
                v.push_back(A2[i]);
            }
             m.erase(A2[i]);
            
        }
        for(auto i:m){
            for(int j=0;j<i.second;j++)
            v.push_back(i.first);
        }
        return v;
    } 
};