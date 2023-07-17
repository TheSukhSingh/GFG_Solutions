//User function Template for Java

// class Node  
// { 
//     int data; 
//     Node left, right; 
   
//     public Node(int d)  
//     { 
//         data = d; 
//         left = right = null; 
//     } 
// }

class Solution
{

    int printKDistantfromLeaf(Node root, int k)
    {
        ArrayList<Node> path = new ArrayList<>();
        HashSet<Node> uniqueNodes = new HashSet<>();
        findPath(root,k,path,uniqueNodes);
        
        return uniqueNodes.size();
        
    }
    
    static void findPath(Node root,int K,ArrayList<Node> path,HashSet<Node> uniqueNodes){
        if(root == null)
            return;
        
        path.add(root);
        if(root.left == null && root.right == null){
            if(K<path.size())
                uniqueNodes.add(path.get(path.size()-K-1));
        }
        
        findPath(root.left,K,path,uniqueNodes);
        findPath(root.right,K,path,uniqueNodes);
        path.remove(root);
    }
}