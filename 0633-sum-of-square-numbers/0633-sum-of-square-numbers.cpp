class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0){
            return false;
        }
        long long left = 0, right = sqrt(c);
        while(left<=right){
            if(pow(left,2)+pow(right,2) == c){
                return true;
            }
            else if(pow(left,2)+pow(right,2) > c){
                right--;
            }
            else{
                left++;
            }
        }
        return false;
    }
    
};