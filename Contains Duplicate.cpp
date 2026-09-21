class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    set<int> memory;

    for(int i = 0; i < nums.size(); i++){
        if(memory.find(nums[i]) != memory.end()){
            return true;
        }
        memory.insert(nums[i]);
    }

    return false;
}
};
