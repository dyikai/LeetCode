class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        vector<int> vec;
        vec.push_back(0);
        
        for (int i = (int)(s.length() - 1); i >= 0; --i) {
            if (s[i] != ' ') {
                vec[count] += 1;
            } else {
                ++count;
                vec.push_back(0);
            }
        }
        
        for (int i = 0; i < vec.size(); ++i) {
            if (vec[i] != 0) {
                return vec[i];
            }
        }
        
        return 0;
    }
};
