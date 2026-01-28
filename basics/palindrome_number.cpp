/*
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // Negative numbers are not palindromes

        int rev = 0;
        int original = x;

        while (x > 0) {
            int digit = x % 10;

            // Check for overflow (optional since x is <= INT_MAX)
            if (rev > (INT_MAX - digit) / 10) return false;

            rev = rev * 10 + digit;
            x /= 10;
        }

        return rev == original;
    }
};

*/