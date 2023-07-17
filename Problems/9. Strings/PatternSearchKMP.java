class match
{
    void computeLPSArray(String pat, int M, int lps[]) 
    { 
        int len = 0;
        lps[0] = 0;
        int i=1;
        
        while(i<M)
        {
            if(pat.charAt(i) == pat.charAt(len))
            {
                len++;
                lps[i++] = len;  
            }
            else
            {
               if(len == 0)
                    lps[i++] = 0;
                else
                    len = lps[len-1];
            }
        }
    }
    
    boolean KMPSearch(String pat, String txt)
    {
        int i=0,j=0;
        int N = txt.length();
        int M = pat.length();
        
        if(N<M)
            return false;
            
        int lps[] = new int[M];
        
        computeLPSArray(pat,M,lps);
        
        while(i<N){
            if(txt.charAt(i) == pat.charAt(j))
            {
                i++;
                j++;
            }
            
            if(j==M)
                return true;
            else if(i<N && txt.charAt(i) != pat.charAt(j))
            {
                if(j==0)
                    i++;
                else
                    j = lps[j-1];
            }
        }
        return false;
    }
}
