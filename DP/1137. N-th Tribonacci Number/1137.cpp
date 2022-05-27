class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        vector<int> dp;
        dp.push_back(0);
        dp.push_back(1);
        dp.push_back(1);
        for(int i=3;i<=n;i++)
        {
            int num=dp[i-3]+dp[i-2]+dp[i-1];
            dp.push_back(num);
        }
        
        return dp[n];
    }
};