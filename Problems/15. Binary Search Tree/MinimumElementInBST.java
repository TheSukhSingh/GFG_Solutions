/*
class Node {
    int data;
    Node left;
    Node right;
    Node(int data) {
        this.data = data;
        left = null;
        right = null;
    }
}
*/
class Tree
{
    int minValue(Node node)
    {
        if(node == null)
            return -1;
        
        if(node.left == null)
            return node.data;
            
        return minValue(node.left);
    }
}