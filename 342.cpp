class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num < 1) return false;
        while(num > 1) {
            if(int(num & 3) != 0) return false;
            num >>= 2;
        }
        return true;
    }
};