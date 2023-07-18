class Solution
{
    public static String removePair(String str)
    {
        Stack<Character> st = new Stack<>();
        
        for(int i=str.length()-1;i>=0;i--)
        {
            char x = str.charAt(i);
            if(st.isEmpty())
                st.push(x);
            else if(st.peek() == x)
                st.pop();
            else
                st.push(x);
        }
        
        String result = "";
        while(!st.isEmpty())
            result += st.pop();
            
        return result;
    }
}