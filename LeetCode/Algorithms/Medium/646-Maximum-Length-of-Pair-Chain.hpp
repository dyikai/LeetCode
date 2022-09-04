class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end());
        vector<int> arr;
        for (auto p : pairs) {
            int x = p[0], y = p[1];
            if (arr.size() == 0 || x > arr.back()) {
                arr.emplace_back(y);
            } else {
                int idx = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
                arr[idx] = min(arr[idx], y);
            }
        }
        return arr.size();
    }
};