class Solution {
public:
    vector<vector<int>> getFactors(int n) {
        vector<vector<int>> result;
        vector<int> tmp;
        if(n <= 2) return result;
        dfs(result, tmp, n, 2);
        return result;
    }
    
    void dfs(vector<vector<int>>& result, vector<int> cur, int n, int start) {
        for(int i = start; i*i <= n; i++) {
            if(n%i == 0) {
                cur.push_back(i);
                dfs(result, cur, n/i, i);
                cur.push_back(n/i);
                result.push_back(cur);
                cur.pop_back();
                cur.pop_back();
            }
        }
    }
};