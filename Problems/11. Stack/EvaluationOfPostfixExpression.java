

class Solution
{
    public static int evaluatePostFix(String exp)
    {
        Stack<Integer> st = new Stack<>();
        for(int i=0;i<exp.length();i++)
        {
            char ch = exp.charAt(i);
            
            if(Character.isDigit(ch))
                st.push(ch-'0');
            else
            {
                int y = st.pop();
                int x = st.pop();
                
                switch(ch)
                {
                    case '+': st.push(x+y);
                        break;
                    case '-': st.push(x-y);
                        break;
                    case '*': st.push(x*y);
                        break;
                    case '/': st.push(x/y);
                }
            }
        }
        
        return (int)st.pop();
    }
}