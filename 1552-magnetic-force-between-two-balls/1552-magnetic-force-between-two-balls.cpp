class Solution {
public:
    
    int count(vector<int>& position, int d, int n){
        int ans = 1, curr = position[0];
        for(int i = 1; i<n; i++){
            if(position[i]-curr>=d){
                ans++;
                curr = position[i];
            }
        }
        return ans;
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
         sort(position.begin(), position.end());
        int l = 0, r = position.back() - position.front();
        while (l < r) {
            int mid = r - (r - l) / 2;
            if (count(position, mid, n) >= m)
                l = mid;
            else
                r = mid - 1;
        }
        return l;
    }
    
};