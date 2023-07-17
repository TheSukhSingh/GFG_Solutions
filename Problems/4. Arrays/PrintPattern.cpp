class Solution{
public:
    vector<int> pattern(int N){
        vector<int>ans;
        int b=N;
      while(N>0){
        ans.push_back(N);
        N=N-5;
        
      }
      while(N<=b){
          ans.push_back(N);
          N=N+5;
      }
      return ans;
    }
};