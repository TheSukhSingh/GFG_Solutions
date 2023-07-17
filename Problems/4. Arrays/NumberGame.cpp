class Solution {
  public:
    long long numGame(long long n) {
        long long mod = 1e9 + 7;
        long long ans = 1;

        for (long long i = 1; i<=n; i++){
            ans = lcm(ans, i);
            ans = ans % mod;
        }

        return ans;
    }
    long long lcm(long long a, long long b){
        return (a * b) / __gcd(a, b);
    }
};  