class Solution {
public:
    int integerBreak(int n) {
        if(n == 2) return 1;
        if(n == 3) return 2;
        int result = 1;
        while(n > 3) {
            if(n%3 == 1) {
                n -= 2;
                result *= 2;
            }
            else {
                n -= 3;
                result *= 3;
            }
        }
        result *= n;
        return result;
    }
};