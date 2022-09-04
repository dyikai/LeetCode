class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        int* r = new int[rows]();
        int* c = new int[cols]();

        int ans = 0;

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                *(r + i) += mat[i][j];
                *(c + j) += mat[i][j];
            }
        }

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                if (mat[i][j] == 1 && *(r + i) == 1 && *(c + j) == 1)
                {
                    ++ans;
                }
            }
        }

        return ans;
    }
};