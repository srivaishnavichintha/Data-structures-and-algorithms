class Solution {
public:
     void nqueen(int col,int n,vector<string>& board,vector<vector<string>>& ans, vector<int>& lrow, vector<int>& ldiag,  vector<int>& udiag){
        if(col==n){
           ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(lrow[row]==0 && ldiag[row+col]==0 && udiag[n-1 + row-col]==0){
                board[row][col]='Q';
                lrow[row]=1;
                ldiag[row+col]=1;
                udiag[n-1 + row-col]=1;
                nqueen(col+1,n,board,ans,lrow,ldiag,udiag);
                board[row][col]='.';
                lrow[row]=0;
                ldiag[row+col]=0;
                udiag[n-1 + row-col]=0;
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<string>> ans;
       vector<string> board(n);
        for(int i = 0; i < n; i++){
            board[i] = string(n, '.');
        } 
       vector<int> lrow(n+1,0),ldiag(n+n,0),udiag(n+n,0);
       nqueen(0,n, board,ans,lrow,ldiag,udiag);
       return ans.size();
    }
};
