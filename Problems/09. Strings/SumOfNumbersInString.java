class Solution
{
    //Function to calculate sum of all numbers present in a string.
     public static long findSum(String s)
    {
        int sum = 0;
        String[] sa = s.split("[a-zA-z]");
        String[] s1 = Arrays.stream(sa).filter(str->str.length()>0).toArray(String[]::new);
        for (String value : s1) {
            sum = sum + Integer.parseInt(value);
        }
        return sum;
    }
    
}