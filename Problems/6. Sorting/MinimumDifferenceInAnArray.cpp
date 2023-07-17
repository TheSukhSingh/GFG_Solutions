class Solution{
    public:
    //Function to find minimum difference between any pair of elements in an array.
    int MinimumDifference(int arr[], int n)
    {
        //code here
        int ans=INT_MAX;
        sort(arr,arr+n);
        for(int i=1;i<n;i++)
        {
            ans=min(arr[i]-arr[i-1],ans);
        }
        return ans;
    }
};