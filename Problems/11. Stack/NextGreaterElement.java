class Solution
{
    public static long[] nextLargerElement(long[] arr, int n) 
    { 
        long sol[] = new long[n];
        Stack<Long> st = new Stack<>();
        
        for(int i=n-1;i>=0;i--)
        {
            while(!st.isEmpty() && arr[i]>=st.peek())
                st.pop();
                
            sol[i] = (st.isEmpty())?-1:st.peek();
            st.push(arr[i]);
        }
        
        return sol;
    }  
}