class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    bool isprime(int a)
    {
        if(a==2 || a==3 || a==5 || a==7)
        return true;
        
        return false;
    }
    int primeDigits(int n)
    {
        //code here
        int count=0,ans,i=2;
        while(count<n) //Running till we have the nth number
        {
                int j=i;
                while(j)
                {
                    if(!isprime(j%10))   //checking if each digit is prime
                    break;
                    j=j/10;
                }
                if(j==0)  //if j==0 means all digit were prime
                {
                 count++;  //if all digit is prime increment count store in ans
                 ans=i;
                }
            i++;
        }
        return ans;
    }
};