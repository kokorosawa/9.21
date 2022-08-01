class Solution {
public:
    int ans = 0;
    int uniquePaths(int m, int n) {
        re(0,0,m,n);
        return ans;
    }
    
    void re(int cm,int cn,int m,int n){
        if(cm >= m || cn >= n) return;
        else if (cm == m - 1 && cn == n - 1) ans++;
        else{
            re(cm + 1,cn, m, n);
            re(cm ,cn + 1, m, n);
        }
    }
};