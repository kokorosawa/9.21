class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=10001;
        
        vector<int> sum(n, 0);
        vector<int> dp(n, 0);
        
        for(int i : nums)
            sum[i] += i;
        
        dp[0] = 0;
        dp[1] = sum[1];
        
        for(int i = 2;i < n;i++){
            dp[i] = max(dp[i-1], dp[i-2] + sum[i]);
        }
        return dp[n-1];
    }
};