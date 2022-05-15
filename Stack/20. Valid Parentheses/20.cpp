class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;
        for(auto i : s){
            if( i == '(' or i == '[' or i == '{') ans.push(i);
            else{
                if(ans.empty() or (ans.top()=='(' and i!=')') or (ans.top()=='[' and i!=']') or (ans.top()=='{' and i!='}')) return false;
                ans.pop();
            }
        }
        return ans.empty();
    }
};