class Solution {
public:
    int mp[51][51][51];
    int M = 1e9 + 7;
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(mp, -1, sizeof(mp));
        return dfs(m, n, startRow, startColumn, maxMove);
    }
    
    int dfs(int m, int n, int row, int col, int move){
        if(row > m - 1 || col > n - 1 || row < 0 || col < 0)
            return 1;
        if(move == 0)
            return 0;
        if(mp[row][col][move] != -1) return mp[row][col][move];
        long long curr = 0;
        curr += (dfs(m, n, row - 1, col, move - 1) % M);
        curr += (dfs(m, n, row + 1, col, move - 1) % M);
        curr += (dfs(m, n, row, col + 1, move - 1) % M);
        curr += (dfs(m, n, row, col - 1, move - 1) % M);
        curr %= M;
        return mp[row][col][move] = curr;
        
    }
};