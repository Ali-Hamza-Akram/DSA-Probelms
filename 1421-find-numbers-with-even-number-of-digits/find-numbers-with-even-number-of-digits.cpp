class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count, evenCount = 0;
        for(int i=0; i<nums.size(); i++){
            count = 0;
            while(nums[i]>0){
                nums[i] = nums[i] / 10;
                count++;
            }
            if(count%2==0){
                evenCount++;
            }
        }
        return evenCount;
    }
};