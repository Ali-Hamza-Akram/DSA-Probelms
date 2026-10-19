class Solution {
public:
    bool isPalindrome(int x) {
        int org = x;
        long rev = 0;
        int digit;
        if (x < 0) {
            return false;
        }
        while (x != 0) {
            digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }
        if (org == rev) {
            return true;
        }
        return false;
    }
};