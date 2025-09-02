class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size(), l = 0, r = n-1;
        while(l<=r){
            int mid = l + (r-l) / 2;

            if(nums[mid] == target) return mid;

            // Check if left half is sorted
        if (nums[l] <= nums[mid]) {
            if (nums[l] <= target && target < nums[mid]) {
                r = mid - 1; // target lies in left half
            } else {
                l = mid + 1; // target lies in right half
            }
        }
        // Otherwise, right half is sorted
        else {
            if (nums[mid] < target && target <= nums[r]) {
                l = mid + 1; // target lies in right half
            } else {
                r = mid - 1; // target lies in left half
            }
        }
        }
        return -1;
    }
};