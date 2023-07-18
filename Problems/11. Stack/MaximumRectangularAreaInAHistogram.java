class Solution
{
    public static long getMaxArea(long hist[], long n)  
    {
        Stack<Integer> st = new Stack<>();
        int ps[] = getPreviousSmaller(hist,(int)n,st);
        st.clear();
        int ns[] = getNextSmaller(hist,(int)n,st);
        
        long res = 0;
        for(int i=0;i<n;i++)
        {
            res = Math.max(res,(ns[i]-ps[i]-1)*hist[i]);
        }
        return res;
    }
    
    static int[] getPreviousSmaller(long arr[],int N,Stack<Integer> st)
    {
        int ps[] = new int[N];
        for(int i=0;i<N;i++)
        {
            while(!st.isEmpty() && arr[i]<=arr[st.peek()])
                st.pop();
                
            ps[i] = (st.isEmpty())?-1:st.peek();
            st.push(i);
        }
        return ps;
    }
    
    static int[] getNextSmaller(long arr[],int N,Stack<Integer> st)
    {
        int ns[] = new int[N];
        for(int i=N-1;i>=0;i--)
        {
            while(!st.isEmpty() && arr[i]<=arr[st.peek()])
                st.pop();
                
            ns[i] = (st.isEmpty())?N:st.peek();
            st.push(i);
        }
        return ns;
    }   
        
}
