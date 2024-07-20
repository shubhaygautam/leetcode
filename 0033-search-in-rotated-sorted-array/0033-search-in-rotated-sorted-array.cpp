class Solution {
public:
    int binaryS(vector<int>& nums, int target, int l, int r){
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(target > nums[mid]){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size(), pivot = 0;
        int l = 0, r = n-1;
        
        while(l<=r){
            int mid = l + (r-l)/2;
            if(l == r){
             pivot = l;
            }
            if(nums[mid]<nums[r]){
                r = mid;
            }
            else{
                l += 1;
            }
        }
        if (target >= nums[pivot] && target <= nums[n - 1]) {
            return binaryS(nums, target, pivot, n - 1);
        } else {
            return binaryS(nums, target, 0, pivot - 1);
        }
    }
};