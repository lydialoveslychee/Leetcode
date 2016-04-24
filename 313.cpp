class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int k = primes.size();
        vector<int> index(k, 0);
        vector<int> result;
        result.push_back(1);
        while(result.size() < n) {
            int mini = INT_MAX;
            for(int i = 0; i < k; i++) {
                if(primes[i]*result[index[i]] < mini) mini = primes[i]*result[index[i]];
            }
            for(int i = 0; i < k; i++) {
                if(primes[i]*result[index[i]] == mini) index[i]++;
            }
            result.push_back(mini);
        }
        return result[n-1];
    }
};