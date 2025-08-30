class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> h;

        for(int num : nums){
            h[num]++;
        }
        vector<pair<int, int>> freq;
        for (auto &p : h) {
            freq.push_back({p.second, p.first});
            }
        sort(freq.rbegin(), freq.rend());
        vector<int> ans;

        for(int i = 0; i<k; i++){
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};