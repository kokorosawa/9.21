class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,max_area=0;
        while(l<r){
            int lh=height[l];
            int rh=height[r];
            max_area=max(max_area,(r-l)*min(lh,rh));
            if(rh>lh) l++;
            else r--;
        }
        return max_area;
    }
};

//https://blog.techbridge.cc/2019/08/30/leetcode-pattern-two-pointer/
