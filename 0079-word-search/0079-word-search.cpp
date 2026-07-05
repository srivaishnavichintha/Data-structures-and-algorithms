class Solution {
public:
    bool wordsearch(vector<vector<char>>& board, string word, int row, int col,int ind, vector<vector<int>>& vis) {
        if (ind == word.size())
            return true;
        if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size())
            return false;
        if (vis[row][col])
            return false;
        if (board[row][col] != word[ind])
            return false;
         vis[row][col] = 1;
        if (wordsearch(board, word, row, col + 1, ind + 1, vis))
            return true;
        if (wordsearch(board, word, row, col - 1, ind + 1, vis))
            return true;
        if (wordsearch(board, word, row + 1, col, ind + 1, vis))
            return true;
        if (wordsearch(board, word, row - 1, col, ind + 1, vis))
            return true;
        vis[row][col] = 0;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<int>> vis(board.size(), vector<int>(board[0].size(), 0));
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (wordsearch(board, word, i, j, 0, vis))
                    return true;
            }
        }
        return false;
    }
};