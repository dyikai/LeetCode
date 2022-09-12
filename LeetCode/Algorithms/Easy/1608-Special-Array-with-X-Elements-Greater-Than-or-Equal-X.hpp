class Solution {
public:
    int specialArray(vector<int>& nums) {
        int cnts[1001] = {0};
        for (int x : nums)
            ++cnts[x];
        for (int i = 1000, tot = 0; i >= 0; --i)
        {
            tot += cnts[i];
            if (i == tot)
                return i;
        }

        return -1;
    }
};