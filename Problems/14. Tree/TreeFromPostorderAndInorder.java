/* Tree node structure
class Node
{
    int data;
    Node left;
    Node right;

        Node(int value)
    {
        data = value;
        left = null;
        right = null;
    }
}*/



class GfG
{
    Node buildTree(int in[], int post[], int n) {
        int start = 0;
        int end = n-1;
        return construct(in,post,start,end,new Index(n));
    }
    
    Node construct(int in[],int post[],int start,int end,Index obj){
        if(start>end)
            return null;
            
        Node root = new Node(post[--obj.postIndex]);
        
        int inIndex = 0;
        for(int i=start;i<=end;i++){
            if(root.data == in[i]){
                inIndex = i;
                break;
            }
        }
        
        root.right = construct(in,post,inIndex+1,end,obj);
        root.left = construct(in,post,start,inIndex-1,obj);
        
        return root;
    }
}

class Index{
    int postIndex;
    Index(int postIndex){
        this.postIndex = postIndex;
    }
}