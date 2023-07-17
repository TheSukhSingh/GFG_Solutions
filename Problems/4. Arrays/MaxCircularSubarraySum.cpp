class Solution
{
    public:
    int totalsum(int arr[], int n)
    {
        int res=arr[0];
        int maxend=arr[0];
        for(int i=1; i<n; i++)
        {
            maxend= max(maxend+arr[i], arr[i]);
            res=max(res, maxend);
        }
        return res;
    }
    
    int circularSubarraySum(int arr[], int num)
    {
        int total=totalsum(arr, num);
        if(total<0)
           return total;
        
        int sum=0;
        for(int i=0; i<num; i++)
        {
            sum=sum+arr[i];
            arr[i]= -arr[i];
        }
         int max_cir= sum+totalsum(arr, num);
         return max(max_cir, total);
        }
};