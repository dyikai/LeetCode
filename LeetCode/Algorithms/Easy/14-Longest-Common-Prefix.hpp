class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        
        string minStr = strs[0];
        
        for (int i = 1; i < strs.size(); ++i) {
            if (strs[i].length() < minStr.length()) {
                minStr = strs[i];
            }
        }
        
        
        for (int j = 0; j < minStr.length(); ++j) {
            char tmp = minStr[j];
            for (int i = 0; i < strs.size(); ++i) {
                if (strs[i][j] != tmp) {
                    return prefix;
                }
                
                if (i == strs.size() - 1) {
                    prefix += tmp;
                } else {
                    continue;
                }
            }
        }

        prefix.erase(remove(prefix.begin(), prefix.end(),'\0'), prefix.end());

        return prefix;
    }
};
