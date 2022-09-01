class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0)
        {
            return 0;
        }

        int left(0), _max(0);
        unordered_set<char> set;

        for (int i = 0; i < s.length(); ++i)
        {
            while (set.find(s[i]) != set.end())
            {
                set.erase(s[left]);
                ++left;
            }

            _max = max(_max, i - left + 1);
            set.insert(s[i]);
        }

        return _max;
    }
};