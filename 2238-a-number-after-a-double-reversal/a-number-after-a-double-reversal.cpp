class Solution {
public:
    bool isSameAfterReversals(int num) {
        int digit, rev = 0, rev2 = 0;
        int original = num;
        while(num>0){
            digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }
        while(rev>0){
            digit = rev % 10;
            rev2 = rev2 * 10 + digit;
            rev = rev / 10;
        }
        if(rev2 == original){
            return true;
        }
        else{
            return false;
        }

    }
};