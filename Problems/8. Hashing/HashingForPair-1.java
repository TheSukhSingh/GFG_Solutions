class Geeks {
    // Complete this function
    // Function to check if there is a pair with the given sum in the array.
    public static int sumExists(int arr[], int N, int sum) {
        // Your code here, Geeks
        int start=0;
       int end=N-1;
       Arrays.sort(arr);
       while(start<end){
           int check=arr[start]+arr[end];
           if(check==sum){
               return 1;
           }
           else if(check<sum){
               start++;
           }else if(check>sum){
               end--;
           }
       }
       return 0;
    }
}