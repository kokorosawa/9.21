class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0;i < matrix.size(); ++i){
            int l = 0;
            int r = matrix[i].size() - 1;
            if(matrix[i].back() < target)
                continue;
            if(matrix[i][0] > target)
                break;
           if(search(matrix[i],target)){
                return 1;
            }
        }
        return 0;
    }
    
    bool search(vector<int> &arr,int t){
        int l = 0;
        int r = arr.size()-1;
         while(l <= r){
            int mid = (l + r)/2;
            if(arr[mid] > t)
                r = mid - 1;
            else if(arr[mid] < t)
                l = mid + 1; 
            else if(arr[mid] == t)
                return 1;
        }
        return arr[r] == t;
    }
};