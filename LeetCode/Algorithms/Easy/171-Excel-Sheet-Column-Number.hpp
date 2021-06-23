class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;

        for (int i = columnTitle.size() - 1; i >= 0; --i)
        {
            int num = columnTitle[i] - 'A' + 1;
            if (i == columnTitle.size() - 1)
            {
                res += num;
            }
            else
            {
                res += num * pow(26, columnTitle.size() - 1 - i);
            }
        }

        return res;
    }
};