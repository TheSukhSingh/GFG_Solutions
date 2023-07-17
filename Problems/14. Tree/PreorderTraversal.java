//User function Template for Java



// class Node{
//     int data;
//     Node left,right;
//     Node(int d){
//         data=d;
//         left=right=null;
//     }
// }
class BinaryTree
{
    static ArrayList<Integer> preorder(Node root)
    {
        ArrayList<Integer> al = new ArrayList<>();
        
        if(root == null)
            return al;
        al.add(root.data);
        al.addAll(preorder(root.left));
        al.addAll(preorder(root.right));
        return al;
    }

}