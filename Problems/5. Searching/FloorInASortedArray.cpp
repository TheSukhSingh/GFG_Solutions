class Solution
{
   public:
    int findFloor(vector<long long> arr, long long n, long long x)
    {
    
        long long int low=0,high=n-1;
        if(arr[low]>x)
        {
            return -1;
        }
        if(arr[high]<x)
        {
            return n-1;
        }
        int ans=-1;
        while(low<=high)
        {
            int m=(low+high)/2;
            if(arr[m]>x)
            {
                high=m-1;
            }
            else
            {
                ans=m;
                low=m+1;
            }
        }
        return ans;
    }
};
