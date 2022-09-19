class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        array<int, 26> idx;
        idx.fill(400);
        int ret = -1;

        for (int i = 0; i < s.size(); ++i)
        {
            int x = s[i] - 'a';
            idx[x] = min(idx[x], i);
            ret = max(ret, i - idx[x] - 1);
        }

        return ret;
    }
};