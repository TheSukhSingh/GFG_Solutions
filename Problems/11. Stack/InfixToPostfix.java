class Solution
{
    public static String infixToPostfix(String exp) 
    {
	    String res = "";
	    Stack<Character> st = new Stack<>();
	 
		for(int i=0;i<exp.length();i++){
		    char chr = exp.charAt(i);
		    
		    if(Character.isLetterOrDigit(chr))
		        res += chr;
		    else if(chr == '(')
		        st.push(chr);
		    else if(chr == ')'){
		        while(!st.isEmpty() && st.peek() != '(')
		            res += st.pop();
		           
		        if(!st.isEmpty() && st.peek() == '(')
		            st.pop();
		    }
		    
		    else{ 
		    
		        while(!st.isEmpty() && precedence(chr) <= precedence(st.peek()))
		            res += st.pop();
		        
		        st.push(chr);
		    }
		}
		
		while(!st.isEmpty())
		    res += st.pop();
		    
		return res;
	}
	
	static int precedence(char chr){
	    switch(chr){
	        case '^' : return 3;
	        
	        case '*':
	        case '/': return 2;
	        
	        case '+': 
	        case '-': return 1;
	            
	        default :  return -1;
	        
	    }
	}
}