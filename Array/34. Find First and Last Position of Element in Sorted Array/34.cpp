class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(!nums.size()) return {-1,-1};
        vector<int> ans;
        int l = 0;
        int r = nums.size();
        int pos = 0;
        while(l < r){
            int mid = (l + r) / 2;
            
            if(nums[mid] > target)
                r = mid;
            else if(nums[mid] < target)
                l = mid + 1;
            else if(nums[mid] == target ){
                pos = mid;
                break;
            }
        }
        
        if(nums[pos] == target){
            l = pos;
            r = pos + 1;
            
            while(r >= 0 && r < nums.size() && nums[r] == target){
                r++;
            }
            ans.push_back(r - 1);
            
            while(l >= 0 && l < nums.size() && nums[l] == target){
                l--;
            }
            ans.push_back(l + 1);
            sort(ans.begin(),ans.end());
            return ans;
            
        }else
            return {-1,-1};
    }
};