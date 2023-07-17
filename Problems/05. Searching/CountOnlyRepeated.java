//User function Template for Java

class Solution
{
    // Pair Class
    static class Pair{
         long x;
         long y;
         
         Pair(long x, long y){
             this.x = x;
             this.y = y;
         }
     }
    //Function to find repeated element and its frequency.
    public static Pair findRepeating(Long arr[],int n)
    {
        //Your code here
        Pair p = new Pair(-1, 1);
        HashSet<Long> hs = new HashSet<>();
        
        for(int i = 0; i < arr.length; i++){
            
            if(hs.contains(arr[i])){
                p.x = arr[i];
                p.y = p.y + 1;
            } else {
                hs.add(arr[i]);
            }
        }
        if(p.y == 1){
            return new Pair(-1, -1);
        }
        return p;
    }  
};