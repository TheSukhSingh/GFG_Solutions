class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        sort(arr.begin(),arr.end());
         int i=0;
        while(i<n){

            if(i%2==0 && i+1<n){
                swap(arr[i],arr[i+1]);
            }
            i++;
        }
        
    }
};