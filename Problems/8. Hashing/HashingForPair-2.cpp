int sumExists(int arr[], int N, int sum) {
    // Your code here
    unordered_set<int> s(arr,arr+N);
       int count=0;
    for (int i = 0; i < N; i++) {
        if (s.find(sum- arr[i]) != s.end() and sum-arr[i]!=arr[i]) {
            count++;
            s.erase(sum-arr[i]);
        }
        
    }
    if(count>1){
        return 1;
    }
    return 0;
}