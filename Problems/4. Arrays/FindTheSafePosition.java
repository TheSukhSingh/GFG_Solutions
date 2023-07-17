class Solution {
    static int safePos(int n, int k) {
        // code here
        ArrayList<Integer> al = new ArrayList<Integer>();
        for(int i=1;i<=n;i++){
            al.add(i);
        }
        
        find(al,k,k-1);
        
        return al.get(0);
    }
    
    static void find(ArrayList<Integer> al,int k,int indx){
        if(al.size()==1){
            return;
        }
        if(indx >= al.size()) {
            indx = (indx)%al.size();
        }
        // System.out.println(al.get(indx-1));
        al.remove(indx);
        find(al,k,indx+k-1);
    }
};