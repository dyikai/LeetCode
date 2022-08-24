class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if (target.size() != arr.size()) {
            return false;
        }

        int sum = 0;
        int tmp[1024] = { 0 };

        for (unsigned long i = 0; i < target.size(); ++i)
        {
            if (++tmp[target[i]] == 1)
                ++sum;
            if (--tmp[arr[i]] == 0)
                --sum;
        }
        return sum == 0;
    }
};