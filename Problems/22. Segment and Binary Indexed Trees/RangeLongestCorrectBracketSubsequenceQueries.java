class Solution 
{
    //Function to returns the maximum length of correct bracket subsequence
    //between starting and ending indexes.
    public static int getLongestSequence(Node[] st,String str,int qs,int qe,int n)
    {
       
        //Your code here
        return 2*f(st,0,n-1,0,qs,qe).pairs;
    }
    public static Node f(Node [] st,int ss,int se,int si,int qs,int qe){
        if(qs>se || qe<ss) return null;
        if(ss>=qs && se<=qe){ // contains the range
            return st[si];
        }
        if(se>ss){
        int mid = getMid(ss, se);
        Node left = f(st, ss, mid, 2*si+1, qs,qe);
        Node right =f(st, mid+1, se, 2*si+2, qs,qe);
        return merge(left, right);
        }
        return null;
    }
    public static int getMid(int s, int e) {
        return s + (e - s) / 2;
    }
  
    // Returns Parent Node after merging its left and right child
    public static Node merge(Node leftChild, Node rightChild) {
        if(leftChild==null && rightChild==null) return null;
        if(leftChild==null) return rightChild;
        if(rightChild==null) return leftChild;
        Node parentNode = new Node();
        int minMatched = Math.min(leftChild.open, rightChild.closed);
        parentNode.pairs = leftChild.pairs + rightChild.pairs + minMatched;
        parentNode.open = leftChild.open + rightChild.open - minMatched;
        parentNode.closed = leftChild.closed + rightChild.closed - minMatched;
        return parentNode;
    }
    
}