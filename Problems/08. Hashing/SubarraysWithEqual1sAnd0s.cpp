class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        // Best approach 
        long long cnt = 0;
        unordered_map<long long, long long> mp;
        int c1 = 0;
        int c0 = 0;
        mp[(c1-c0)] = 1;
        
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 0) c0++;
            else c1++;
            
            if(mp[(c1-c0)])
            cnt += mp[(c1-c0)];
            
            mp[(c1-c0)]++;
        }
        
        return cnt;
    }
};