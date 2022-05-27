class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        
        int res=0;
        
        for(int i=0;i<n;i++){
            
            int r=i,l=i;
            while(l >= 0 and r < n and s[l] == s[r] ) res++,l--,r++;
            
            l=i;
            r=i+1;
            while(l >= 0 and r < n and s[l] == s[r] ) res++,l--,r++;
        }
        return res;
    }
};