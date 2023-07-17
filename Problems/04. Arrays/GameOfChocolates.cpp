class Solution{
public:
    bool game(int a, int b){
      // Code Here
      if(a==0 && b==0) return 0;
        if(a==b) return 1;
        double gold = 1.61803398;
        int n = 1;
        if(a>b) swap(a,b);
        int f = 0,s = 0;
        while(s<b){
            f = n*gold;
            s = n*gold*gold;
            n++;
        }
        return !(a==f && s==b);
    }
};