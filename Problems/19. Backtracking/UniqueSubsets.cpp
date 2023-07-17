class Solution
{
    public:
    //Function to find all possible unique subsets.
    void fun(vector<int>arr,vector<int>v, set<vector<int>>&s, int n, int i){
        
           if(i==n){
               sort(v.begin(),v.end());
               s.insert(v);
               return;
           }
           
           v.push_back(arr[i]);
           fun(arr,v,s,n,i+1);
           v.pop_back();
           fun(arr,v,s,n,i+1);
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        set<vector<int>>s;
        
        vector<int>v;
        
        fun(arr,v,s,n,0);
        vector<vector<int>>ans;
        for(auto it:s){
            ans.push_back(it);
        }
        
        return ans;
    }
};