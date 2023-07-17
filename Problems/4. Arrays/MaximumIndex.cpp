class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        int right_max[N];
        int max_index = N-1;
        for (int i=N-1;i>=0;i--) {
            if (A[max_index] < A[i]) {
                max_index = i;
            }
            right_max[i] = max_index;
        }
    
        int start = 0;
        int k = 0;
        int i = 0;
        while (i < N) {
            while (i<N && A[start]<=A[right_max[i]]) {
                i++;
            }
            k = max(k, right_max[i-1]-start);
            start++; 
        }
        return k;
    }
};