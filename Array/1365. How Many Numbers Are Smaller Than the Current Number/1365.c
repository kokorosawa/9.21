class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int now;
        vector ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            now=nums[i];
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(now>nums[j]){
                    count++;
                }
            }
            ans[i]=count;
        }
        return ans;
    }
};