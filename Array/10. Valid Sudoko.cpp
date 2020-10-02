class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if (board.size() != 9 || board[0].size() != 9) {
            return false;
        }
         
        vector<vector<bool> > rows(9, vector<bool> (9, 0));
        vector<vector<bool> > cols(9, vector<bool> (9, 0));
        vector<vector<bool> > blocks(9, vector<bool> (9, 0));
         
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                 
                int c = board[i][j] - '1';
                 
                if (rows[i][c] == true || cols[j][c] == true || blocks[(i / 3) * 3 + j / 3][c] == true) {
                    return false;
                }
                 
                rows[i][c] = true;
                cols[j][c] = true;
                blocks[(i / 3) * 3 + j / 3][c] = true;
            }
        }
        return true;
        
    }
};