class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        set<int> st;
        sort(b,b+m);
        for(int i=0;i<n;i++){
            if(binary_search(b,b+m,a[i])){
                st.insert(a[i]);
            }
        }
        return st.size();
    }
};