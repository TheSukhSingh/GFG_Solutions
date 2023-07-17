// User function Template for Java

/* A Binary Tree node

class Node {
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
    }
} */
class Solution 
{
    static void inOrderUtil(Node root,ArrayList<Integer> al)
    {
       if(root != null)
       {
           inOrderUtil(root.left,al);
           al.add(root.data);
           inOrderUtil(root.right,al);
       }
   }
   
   ArrayList<Integer> inOrder(Node root)
   {
       ArrayList<Integer> al = new ArrayList<>();
       inOrderUtil(root,al);
       return al;
   }
}