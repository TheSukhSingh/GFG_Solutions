// User function Template for Java

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

// Rest of the code is already given as Driver Code

class Solution 
{
    int getMaxWidth(Node root)
    {
        if(root == null)
            return 0;
            
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        int res = 0;
        
        while(!q.isEmpty()){
            int count = q.size();
            res = Math.max(res,count);
            
            for(int i=0;i<count;i++){
                Node curr = q.poll();
                if(curr.left != null)
                    q.add(curr.left);
                if(curr.right != null)
                    q.add(curr.right);
            }
        }
        return res;
    }	
}