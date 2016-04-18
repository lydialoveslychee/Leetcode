class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if(m == 0) return false;
        int n = matrix[0].size();
        int c = 0, r = n-1;
        while(c < m && r >= 0) {
            if(matrix[c][r] == target) return true;
            if(matrix[c][r] > target) r--;
            else c++;
        }
        return false;
    }
};