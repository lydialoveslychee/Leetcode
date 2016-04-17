class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int> tmp(n, 0);
        vector<vector<int>> result(n, tmp);
        int k = 1;
        int i = 0;
        while(k <= n*n) {
            int j = i;
            while(j < n-i) {
                result[i][j++] = k++;
            }
            j = i+1;
            while(j < n-i) {
                result[j++][n-i-1] = k++;
            }
            j = n-i-2;
            while(j >= i) {
                result[n-i-1][j--] = k++;
            }
            j = n-i-2;
            while(j > i) {
                result[j--][i] = k++;
            }
            i++;
        }
        return result;
    }
};