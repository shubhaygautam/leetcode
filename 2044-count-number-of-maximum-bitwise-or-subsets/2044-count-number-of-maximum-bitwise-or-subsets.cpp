class Solution {
public:
    int countMaxOrSubsets(vector<int>& A) {
         int goal = 0, N = A.size(), ans = 0;
        for (int n : A) goal |= n;
        for (int m = 1; m < 1 << N; ++m) {
            int x = 0;
            for (int i = 0; i < N; ++i) {
                if (m >> i & 1) x |= A[i];
            }
            if (x == goal) ++ans;
        }
        return ans;
    }
};