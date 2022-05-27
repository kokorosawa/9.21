class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        vector<int> dp;
        dp.push_back(0);
        dp.push_back(1);
        for(int i=2;i<=n;i++){
            int num=dp[i-2]+dp[i-1];
            dp.push_back(num);
        }
        
        return dp[n];
    }
};