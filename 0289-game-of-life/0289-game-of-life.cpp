class Solution {
public:
    
    int clacu(vector<vector<int>>& board, int t,int i, int j) {
        if (board[i][j] == 1)
        return (t == 2 || t == 3);
        return t == 3;
    }

    void gameOfLife(vector<vector<int>>& board) {
       vector<vector<int>> ans(board.size(), vector<int>(board[0].size()));
        vector<pair<int, int>> dir = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1},
                                      {0, 1},   {1, -1}, {1, 0},  {1, 1}};

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                int t = 0;

                for (auto& d : dir) {
                    int nr = i + d.first;
                    int nc = j + d.second;

                    if (nr >= 0 && nr < board.size() && nc >= 0 &&
                        nc < board[0].size()) {
                        t += board[nr][nc];
                    }
                }
                ans[i][j]=clacu(board,t,i,j);
            }
        }
        board=ans;
    }
};