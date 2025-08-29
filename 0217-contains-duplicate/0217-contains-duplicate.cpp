class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> h;
        for(int i = 0; i<nums.size(); i++){
            if(h.find(nums[i])!=h.end()){
                return true;
            }
            h.insert(nums[i]);
        }
        return false;
    }
};