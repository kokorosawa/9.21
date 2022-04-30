class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int curr=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('&&curr++>0) ans+=s[i];
            if(s[i]==')'&&curr-->1) ans+=s[i];
        }
        return ans;
    }
};