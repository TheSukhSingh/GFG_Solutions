class Solution{
    public:
    //Complete this function
    //Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int arr[], int n)
    {
        //Your code here
         int count=0;
        unordered_map<int,int> h;
        
        for(int i=0;i<n;i++)
        {
            h[arr[i]]++;
            
        }
        
        for(auto e:h)
        {
            if(e.second==1)
            count++;
        }
        return count;
    }

};