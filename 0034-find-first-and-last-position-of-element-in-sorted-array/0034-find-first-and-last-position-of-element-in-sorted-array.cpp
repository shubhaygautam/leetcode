class Solution {
public:
    
    int findLeftMost(vector<int>& nums, int target, int n){
        int high = n-1, low = 0;
        int left = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                left = mid; // possibly my answer
                high = mid-1; //look more on left
            }
            else if(target < nums[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return left;
    }
    
    int findRightMost(vector<int>& nums, int target, int n){
        int high = n-1, low = 0;
       
        int right = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                right = mid; //possibly my answer
                low = mid+1; //look more on right
            }
            else if(target < nums[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return right;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        
        int leftMost = findLeftMost(nums, target, n);
        int rightMost = findRightMost(nums, target, n);
        
        return {leftMost, rightMost};
    }
};