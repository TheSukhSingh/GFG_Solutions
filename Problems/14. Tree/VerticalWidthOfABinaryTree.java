//User function Template for Java

/*Structure of node of binary tree is as follows
class Node
{
    int data;
    Node left,right;
    Node(int d)
    {
        data=d;
        left=right=null;
    }
} */
class Tree
{
    
    public static int verticalWidth(Node root)
	{
	    HashSet<Integer> hs = new HashSet<>();
	    verticalDistance(root,0,hs);
	    return hs.size();
	}
	
	static void verticalDistance(Node root,int distance,HashSet<Integer> hs){
	    if(root == null)
	        return;
	    
	    hs.add(distance);
	    verticalDistance(root.left,distance-1,hs);
	    verticalDistance(root.right,distance+1,hs);
	}
}