class Solution {
public:
    bool find(int i, int j, int idx, string word, vector<vector<char>>& board, int n, int m) {
        if (idx == word.size()) return true;
        if (i < 0 || j < 0 || i >= n || j >= m) return false;
        if (board[i][j] != word[idx]) return false;

        char temp = board[i][j];
        board[i][j] = '#'; 

       
        bool found = find(i + 1, j, idx + 1, word, board, n, m) ||
                     find(i - 1, j, idx + 1, word, board, n, m) ||
                     find(i, j + 1, idx + 1, word, board, n, m) ||
                     find(i, j - 1, idx + 1, word, board, n, m);

        board[i][j] = temp; 
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0]) {
                    if (find(i, j, 0, word, board, n, m)) return true;
                }
            }
        }
        return false;
    }
};