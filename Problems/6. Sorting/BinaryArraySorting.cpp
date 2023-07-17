class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       //Your code here
       
       /**************
        * No need to print the array
        * ************/
         int start=0;
        int end=N-1;
        
        while(start<=end){
            
            if(A[start]==0){
            start++;
            }else if(A[end]==1){
            end--;
            } else{
                int temp=A[start];
                A[start]=A[end];
                A[end]=temp;
                start++;
                end--;
            }
        }
    }
};