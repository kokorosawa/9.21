class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0;
        
        int leftmax[height.size()], rightmax[height.size()];
        int maxleft = 0, maxright = 0;
        int trap;
        
        for(int i = 0; i < height.size(); i++){
            leftmax[i] = maxleft;
            maxleft = max(height[i], maxleft);
            
            rightmax[height.size()- 1 - i] = maxright;
            maxright = max(height[height.size()- 1 - i], maxright);
        }
        
        for(int i = 0; i < height.size(); i++){
            trap = min(leftmax[i], rightmax[i]) - height[i];
            if(trap > 0)
                res += trap;
        }
        
        return res;
    }
};