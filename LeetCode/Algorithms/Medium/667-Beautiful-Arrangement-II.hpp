class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> answer;
        for (int i = 1; i < n - k; ++i) {
            answer.emplace_back(i);
        }
        for (int i = n - k, j = n; i <= j; ++i, --j) {
            answer.emplace_back(i);
            if (i != j) {
                answer.emplace_back(j);
            }
        }
        return answer;
    }
};
