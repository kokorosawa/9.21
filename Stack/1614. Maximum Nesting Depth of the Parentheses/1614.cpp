class Solution {
public:
    int maxDepth(string s) {
        int curr=0,maxans=INT_MIN;
        for(int i=0;i<s.size();i++){
            maxans=max(maxans,curr);
            if(s[i]=='(') curr++;
            if(s[i]==')') curr--;
        }
        return maxans;
    }
};