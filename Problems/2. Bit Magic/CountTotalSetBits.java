//User function Template for Java

class Solution
{
    static int getLeftmostBit(int n)
{
    int m = 0;
    while (n > 1)
    {
        n = n >> 1;
        m++;
    }
    return m;
}

static int getNextLeftmostBit(int n, int m)
{
    int temp = 1 << m;
    while (n < temp)
    {
        temp = temp >> 1;
        m--;
    }
    return m;
}
static int countSetBits(int n)
{
    int m = getLeftmostBit(n);
 
    return countSetBits(n, m);
}
 
static int countSetBits( int n, int m)
{
    if (n == 0)
        return 0;
 
    m = getNextLeftmostBit(n, m);
    if (n == ((int)1 << (m + 1)) - 1)
        return (int)(m + 1) * (1 << m);
 
    n = n - (1 << m);
    return (n + 1) + countSetBits(n) + m * (1 << (m - 1));
}
}