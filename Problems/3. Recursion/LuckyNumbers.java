class Solution
{
  public static boolean find(int n,int counter)
    {
       if(counter > n)
       return true;
       if(n%counter == 0)
       return false;
       int next=(n-(n/counter));
       counter++;
       return find(next, counter); 
    }
    
    public static boolean isLucky(int n)
    { 
       return find(n,2);
    }
}