class Solution {
public:
    string reorderSpaces(string text) {
        vector<string> words;
        int n = text.size();
        int cnt = 0;
        for (auto& c: text) {
            if (c == ' ') ++cnt;
        }
        for (int i = 0; i < n; ++i) {
            while (i < n && text[i] == ' ') ++i;
            string t;
            while (i < n && text[i] != ' ') {
                t.push_back(text[i]);
                ++i;
            }
            if (t.size() > 0) words.push_back(t);
        }
        if (words.size() == 1) {
            string res = words[0];
            for (int i = 0; i < cnt; i++) {
                res += " ";
            }
            return res;
        }
        int a = cnt / (-1 + words.size());
        int b = cnt % (-1 + words.size());
        string res = "";
        for (int i = 0; i < words.size(); ++i) {
            if (i > 0) {
                for (int j = 0; j < a; ++j) {
                    res += " ";
                }
            }
            res += words[i];
        }
        if (b > 0) {
            for (int i = 0; i < b; ++i) {
                res += " ";
            }
        }
        return res;
    }
};