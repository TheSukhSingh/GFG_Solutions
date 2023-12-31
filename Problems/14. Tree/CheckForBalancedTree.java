//User function Template for Java


/* A binary tree node class
class Node
{
	int data;
	Node left,right;
	
	Node(int d)
	{
		data = d;
		left = right = null;		
	}
} */

class Tree
{
    
    boolean isBalanced(Node root)
    {
        if(root == null)
            return true;
            
        int lh = height(root.left);
        int rh = height(root.right);
        
        return (Math.abs(lh-rh)<=1 && isBalanced(root.left) && isBalanced(root.right));
    }
    
    int height(Node root){
        if(root == null)
            return 0;
        
        return 1+Math.max(height(root.left),height(root.right));
    }
}