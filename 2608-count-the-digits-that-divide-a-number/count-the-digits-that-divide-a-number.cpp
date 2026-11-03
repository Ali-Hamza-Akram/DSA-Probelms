class Solution {
public:
    int countDigits(int num) {
        int count = 0, digit;
        int original = num;
        while(num > 0) {
            digit = num % 10;
            if(original % digit == 0) {
                count++;
            }
            num = num / 10;
        }
        return count;
    }
};