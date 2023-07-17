//User function Template for Java



//User function Template for Java

/* A Binary Tree node
class Node {
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
    }
} */

class Tree
{
    ArrayList<Integer> postOrder(Node root)
    {
        ArrayList<Integer> al = new ArrayList<>();
        
        if(root != null){
            al.addAll(postOrder(root.left));
            al.addAll(postOrder(root.right));
            al.add(root.data);
        }
        
        return al;
    }
}