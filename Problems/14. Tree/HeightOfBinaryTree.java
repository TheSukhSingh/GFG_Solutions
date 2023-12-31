//User function Template for Java

/* 
class Node
{
    int data;
    Node left, right;

    Node(int item)
    {
        data = item;
        left = right = null;
    }
}
 */

class Solution 
{
    int height(Node root) 
    {
        if(root == null)
            return 0;
        
        return 1 + Math.max(height(root.left),height(root.right));
    }  
}