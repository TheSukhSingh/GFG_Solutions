class Solution
{
  //Function to find median of the array elements.  
  public int median(int A[],int N)
    {
      
       Arrays.sort(A);
       int mid = N/2 ;
       int res = 0 ;
        if(N%2 == 0 ){
            res = (A[mid-1] + A[mid])/2 ;
            return res ;
        }
        
       //Your code here
       //If median is fraction then conver it to integer and return
        return A[mid];
    }
    //Function to find median of the array elements.
    public int mean(int A[],int N)
    {
       //Your code here
       int res = 0 ;
       int sum = 0 ;
       for(int i = 0 ; i < N ; i++){
           sum += A[i];
       }
       res = sum / N ;
       return res ;
    }

}