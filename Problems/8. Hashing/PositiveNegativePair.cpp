class Solution{
  public:
    //Function to return list containing all the pairs having both
    //negative and positive values of a number in the array.
    vector <int> findPairs(int arr[], int n) 
    {
        // code here
        vector<int> vec;
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[abs(arr[i])]++;
            if(mp[abs(arr[i])] %2 == 0){
                vec.push_back(-abs(arr[i]));
                vec.push_back(abs(arr[i]));
            }
        }
        
        if(vec.size() == 0)
            vec.push_back(0);
        return vec;
    }
};