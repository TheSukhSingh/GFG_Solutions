//User function Template for Java

class Solution
{
    // complete the function
    public static int digitalRoot(int n)
    {
        // add your code here
         if(n<10){
            return n;
        }
        int sum=(n%10) + digitalRoot(n/10);
        if(sum>=10)
        {
            sum=(sum%10) + digitalRoot(sum/10);
        }
        return sum;
    }
}