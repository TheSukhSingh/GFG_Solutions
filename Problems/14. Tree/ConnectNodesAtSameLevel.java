//User function Template for Java

 /*
    Node class is Defined as follows:
    class Node{
        int data;
        Node left;
        Node right;
        Node nextRight;
        Node(int data){
            this.data = data;
            left=null;
            right=null;
            nextRight = null;
        }
    }
    */
    

class Solution
{
    public static void connect(Node p)
        {
            if(p == null)
                return;
                
            Queue<Node> q = new LinkedList<>();
            q.add(p);
            
            while(!q.isEmpty()){
                int count = q.size();
                Node curr = null;
                for(int i=0;i<count;i++){
                    curr = q.poll();
                    if(i<count-1)
                        curr.nextRight = q.peek();
                    if(curr.left != null)
                        q.add(curr.left);
                        
                    if(curr.right != null)
                        q.add(curr.right);
                }
                curr.nextRight = null;
            }
        }
}