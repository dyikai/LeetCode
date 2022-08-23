class Solution {
public:
    int movesToChessboard(vector<vector<int>>& board) {
        int length = (int)board.size();
        int rowCnt = 0;
        int colCnt = 0;
        int rowSwap = 0;
        int colSwap = 0;

        for (int i = 0; i < length; ++i)
        {
            for (int j = 0; j < length; ++j)
            {
                if ((board[0][0] ^ board[i][0] ^ board[0][j] ^ board[i][j]) == 1)
                {
                    return -1;
                }
            }
        }

        for (int i = 0; i < length; ++i)
        {
            rowCnt += board[0][i];
            colCnt += board[i][0];
            if (board[i][0] == i % 2) {
                ++rowSwap;
            }
            if (board[0][i] == i % 2) {
                ++colSwap;
            }
        }

        if (rowCnt != length / 2 && rowCnt != (length + 1) / 2) {
            return -1;
        }
        if (colCnt != length / 2 && colCnt != (length + 1) / 2) {
            return -1;
        }

        if (length % 2 == 1) {
            if (rowSwap % 2 == 1) {
                rowSwap = length - rowSwap;
            }
            if (colSwap % 2 == 1) {
                colSwap = length - colSwap;
            }
        } else {
            rowSwap = min(rowSwap, length - rowSwap);
            colSwap = min(colSwap, length - colSwap);
        }

        return (rowSwap + colSwap) / 2;
    }
};