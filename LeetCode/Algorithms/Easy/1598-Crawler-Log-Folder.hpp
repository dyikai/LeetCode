class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        for (string s: logs) {
            if (s == "./") {
                continue;
            } else if (s == "../") {
                depth = depth > 0 ? depth - 1 : 0;
            } else {
                ++depth;
            }
        }
        return depth;
    }
};

