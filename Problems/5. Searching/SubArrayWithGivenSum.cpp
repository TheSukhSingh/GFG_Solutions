class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int i=0;
        int j=0;
        int sum = 0;
        while(j<=i && i<=n)
        {
            if(s == 0)return {-1};
             if(sum > s)
            {
                sum -= arr[j];
                j++;
            }
             if(sum < s)
           {
                sum += arr[i];
                i++;
            }
            if(sum == s)
            {
                return {j+1,i};
            }
        }
        return {-1};
    }
};