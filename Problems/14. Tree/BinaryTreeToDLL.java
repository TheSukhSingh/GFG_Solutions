//User function Template for Java

/* class Node
class Node
{
	Node left, right;
	int data;
	
	Node(int d)
	{
		data = d;
		left = right = null;
	}
	
}*/

//This function should return head to the DLL

class Solution
{
    Node prev;
    Node bToDLL(Node root)
    {
        if(root == null)
            return root;
        
        Node head = bToDLL(root.left);
        
        if(prev==null)
            head = root;
        else{
            prev.right = root;
            root.left = prev;
        }
        prev = root;
        
        bToDLL(root.right);
        
        return head;
    }
}