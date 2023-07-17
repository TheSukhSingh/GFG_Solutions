//User function Template for Java

/*class Node
{
    int data;
    Node left,right;
    Node(int d)
    {
        data=d;
        left=right=null;
    }
}*/

class GFG
{
    ArrayList<Integer> zigZagTraversal(Node root)
	{
	    ArrayList<Integer> res = new ArrayList<>();
	    
	    if(root == null)
	        return res;
	        
	    Stack<Node> s1 = new Stack<>();
	    Stack<Node> s2 = new Stack<>();
	    
	    s1.push(root);
	    while(!s1.isEmpty() || !s2.isEmpty()){
	        Node curr;
	        while(!s1.isEmpty()){
	            curr = s1.pop();
	            res.add(curr.data);
	            
	            if(curr.left != null)
	                s2.push(curr.left);
	               
	            if(curr.right != null)
	                s2.push(curr.right);
	        }
	        
	        while(!s2.isEmpty()){
	            curr = s2.pop();
	            res.add(curr.data);
	            
	            if(curr.right != null)
	                s1.push(curr.right);
	                
	            if(curr.left != null)
	                s1.push(curr.left);
	        }
	    }
	    return res;
	}
}