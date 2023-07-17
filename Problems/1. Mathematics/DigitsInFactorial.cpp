//User function Template for C++

class Solution{
    public:
    int digitsInFactorial(int N)
    {
        // code here
             if(N<0)
    return 0;
    if(N<=1)
    return 1;
    else
    {
        double d=0;
        for(int i=2;i<=N;i++)
            d+=log10(i);
        return floor(d)+1;
    }
    }
};