// User function Template for Java

// function Template for Java

// FUNCTION CODE
/* A Binary Tree node
class Node
{
    int data;
    Node left, right;
   Node(int item)
   {
        data = item;
        left = right = null;
    }
} */

class Solution {
    void mirror(Node node)
    {
        if(node == null)
            return;
        mirror(node.left);
        mirror(node.right);
        Node temp = node.right;
        node.right = node.left;
        node.left = temp;
    }
}