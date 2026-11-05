class Solution {
public:
    int addDigits(int num) {
        int ans = 0, digit;
        while(num >=10){
            while(num>0){
                digit = num % 10;
                num = num / 10;
                ans = ans + digit;
            }
            num = ans;
            ans = 0;
        }
        return num;
    }
};