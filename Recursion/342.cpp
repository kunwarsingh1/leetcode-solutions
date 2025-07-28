class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;          // Negative numbers and 0 are not powers of 4
        if (n == 1) return true;           // 4^0 = 1 is a valid power of 4
        if (n % 4 != 0) return false;      // Must be divisible by 4
        return isPowerOfFour(n / 4);       // Recursively check
    }
};
