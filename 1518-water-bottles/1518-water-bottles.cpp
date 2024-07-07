class Solution {
public:
     int numWaterBottles(int n, int k) {
        return n < k ? n : k + numWaterBottles(n - k + 1, k);
    }
};