class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i <= right; i++) {
            int temp = i;
            int digit;
            bool isSelfDividing = true;
            while(temp > 0) {
                digit = temp % 10;
                if(digit == 0 || i % digit != 0) {
                    isSelfDividing = false;
                    break;
                }
                temp = temp / 10;
            }
            if(isSelfDividing) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};