// User function Template for Java

class Sol
{
    int floor(Node root, int key) 
    { 
        int res = -1;
        while(root != null){
            if(root.data == key)
                return root.data;
            else if(root.data<key){
                res = root.data;
                root = root.right;
            }
            else
                root = root.left;
        }
        return res;
    } 
}