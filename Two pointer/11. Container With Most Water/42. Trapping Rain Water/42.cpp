class Solution {
public:
    int trap(vector<int>& height) {
        int leftidx = 0, rightidx = height.size()-1;
        int leftmax = height[leftidx], rightmax = height[rightidx], res = 0;
        
        while(leftidx < rightidx){
            if(leftmax < rightmax){
                leftidx++;
                leftmax = max(leftmax, height[leftidx]);
                res += leftmax - height[leftidx];
            }else{
                rightidx--;
                rightmax = max(rightmax, height[rightidx]);
                res += rightmax - height[rightidx];
            }
        }
        
        return res;
    }
};