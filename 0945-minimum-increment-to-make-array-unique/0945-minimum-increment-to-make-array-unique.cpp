class Solution {
public:
    unordered_map<int, int> root;

    int find(int x) {
        if (root.find(x) == root.end()) {
            root[x] = x;
            return x;
        }
        return root[x] = find(root[x] + 1);
    }

    int minIncrementForUnique(vector<int>& nums) {
        int cnt = 0;
        for (int num : nums) {
            int unique_num = find(num);
            cnt += unique_num - num;
        }
        return cnt;
    }
};