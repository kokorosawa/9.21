class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> rows(n),cols(n);
       //find the row and col max value
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                rows[i]=max(rows[i],grid[i][j]);
                cols[j]=max(cols[j],grid[i][j]);
            }
        }
       //from row and col find the min and -grid[i][j] to see how many you can floor you can incease(cuz skyline is depend on the tallest building,so have to find min)
        int res=0;
        for (int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                res+=min(rows[i],cols[j])-grid[i][j];
            }
        }
        return res;
    }
};
