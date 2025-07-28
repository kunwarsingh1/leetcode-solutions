class Solution {
public:
    int res = 0;
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;       // Negative numbers and 0 are not powers of two
        if (n == 1) return true;        // Base case: 2^0 = 1
        if (n % 2 != 0) return false;   // Must be divisible by 2
        return isPowerOfTwo(n / 2);   
    }
};