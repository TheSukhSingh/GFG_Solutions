class Solution
{
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    public static boolean isRotated(String str1, String str2)
    {
        // Your code here
        if(str1.length() != str2.length())
           return false;
        if(str1.length() == 1 || str2.length() == 2){
            if(str1.equals(str2))
               return true;
            else
               return false;
        }
        
        int n = str1.length();
        String str = str1+str1;
        int found = str.indexOf(str2);
        if(found == 2 || found == n-2)
           return true;
        return false;  
    }
}