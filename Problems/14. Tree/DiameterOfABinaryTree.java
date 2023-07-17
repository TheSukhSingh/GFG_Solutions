// User function Template for Java

/*class Node {
    int data;
    Node left;
    Node right;
    Node(int data) {
        this.data = data;
        left = null;
        right = null;
    }
}*/

class Solution {
    int diameter(Node root) {
        if(root == null)
            return 0;
            
        int lh = height(root.left);
        int rh = height(root.right);
        int d1 = lh + rh + 1;
        
        int d2 = diameter(root.left);
        int d3 = diameter(root.right);
        
        return Math.max(d1,Math.max(d2,d3));
    }
    
    int height(Node root){
        if(root == null)
            return 0;
            
        return 1 + Math.max(height(root.left),height(root.right));
    }
}