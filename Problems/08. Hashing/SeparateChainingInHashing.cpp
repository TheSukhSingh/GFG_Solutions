class Solution{
  public:
    //Complete this function
    //Function to insert elements of array in the hashTable avoiding collisions.
    vector<vector<int>> separateChaining(int h,int arr[],int n)
    {
       //Your code here
       vector<vector<int>> ans(h);
        
        for(int i = 0;i<n;i++)
        {
                int j = arr[i]%h;
                 ans[j].push_back(arr[i]);
        }
            return ans;
    }
};