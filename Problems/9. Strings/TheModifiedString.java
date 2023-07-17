class Solution
{
    //Function to find minimum number of characters which Ishaan must insert  
    //such that string doesn't have three consecutive same characters.
    public static long modified(String a)
    {
        int count = 0;
        int i = 0;
        while(i <=a.length()-3){
            if(a.charAt(i) == a.charAt(i+1) && a.charAt(i) == a.charAt(i+2)){
                count++;
                i=i+2;
            }else{
                i++;
            }
        }
        return count;
    }
}