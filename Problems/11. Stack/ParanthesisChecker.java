class Solution
{
    static boolean ispar(String x)
    {
        int N = x.length();
        if((N & 1) == 1)
            return false;
         
        Stack<Character> st = new Stack<>();   
        for(int i=0;i<N;i++)
        {
            char chr = x.charAt(i);
            if(chr == '['|| chr == '(' || chr == '{')
                st.push(chr);
            else
            {
                if(st.isEmpty())
                    return false;
                else if((st.peek()=='['&& chr==']') || (st.peek()=='('&& chr==')') || (st.peek()=='{' && chr=='}'))
                    st.pop();
                else
                    return false;
            }
        }
        return st.isEmpty();
    }
}