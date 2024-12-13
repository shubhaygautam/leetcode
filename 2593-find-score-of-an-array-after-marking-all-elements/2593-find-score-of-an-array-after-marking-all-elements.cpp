class Solution {
public:
    long long findScore(vector<int>& n) {
    long long score = 0, sz = n.size();
    vector<int> id(sz);
    iota(begin(id), end(id), 0);
    stable_sort(begin(id), end(id), [&](int i, int j){ return n[i] < n[j]; });
    for (int i : id)
        if (n[i]) {
            score += n[i];
            n[i] = n[min((int)sz - 1, i + 1)] = n[max(0, i - 1)] = 0;            
        }
    return score;
}
};