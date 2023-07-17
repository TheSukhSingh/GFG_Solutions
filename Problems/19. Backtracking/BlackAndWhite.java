class BlackAndWhite
{
    static long fun(int x,int y,int N,int M)
    {
        long ans=N*M-1;
        if(x+1<N && y+2<M)
        {
            ans--;
        }
        if(x+2<N && y+1<M)
        ans--;
        if(x+2<N && y-1>=0)
        ans--;
        if(x+1<N && y-2>=0)
        ans--;
        if(x-2>=0 && y-1>=0)
        ans--;
        if(x-1>=0 && y-2>=0)
        ans--;
        if(x-2>=0 && y+1<M)
        ans--;
        if(x-1>=0 && y+2<M)
        ans--;
        return ans%1000000007;
    }
    static long numOfWays(int N, int M)
    {
        long sum=0;
        for(int p=0;p<N;p++)
        {
            for(int q=0;q<M;q++)
            {
                long n=fun(p,q,N,M);
                sum+=n;
            }
        }
        return sum%1000000007;
    }
}