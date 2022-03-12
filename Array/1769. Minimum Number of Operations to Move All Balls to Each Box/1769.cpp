class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int> ans;
        int count=0,ops=0;//from left
        for(int i=0;i<n;i++){
            ops+=count;
            ans.push_back(ops);
            if(boxes[i]=='1') count++;
        }
        count=0,ops=0;//from right
        for(int i=n-1;i>=0;i--){
            ops+=count;
            ans[i]+=ops;
            if(boxes[i]=='1') count++;
        }
        return ans;
    }
};