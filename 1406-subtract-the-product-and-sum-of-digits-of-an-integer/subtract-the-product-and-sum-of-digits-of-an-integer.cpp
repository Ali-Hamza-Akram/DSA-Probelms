class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit, product = 1, sum = 0;
        while(n > 0) {
            digit = n % 10;
            product = product * digit;
            sum = sum + digit;
            n = n / 10;
        }
        return product - sum;
    }
};