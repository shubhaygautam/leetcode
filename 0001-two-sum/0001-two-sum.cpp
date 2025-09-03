class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> h;

        for(int i = 0; i<nums.size(); i++){
            int num = nums[i];
            int compliment = target-num;

            if(h.find(compliment) != h.end()){
                return {h[compliment], i};
            }
            h[num] = i;
        }
        return {};
    }
};