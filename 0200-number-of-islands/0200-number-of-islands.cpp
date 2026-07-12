class Solution {
public:
    int dr[4]={-1,1,0,0};
    int dc[4]={0,0,-1,1};

    void dfs(int i,int j,vector<vector<char>>& grid){

        int m=grid.size();
        int n=grid[0].size();

        if(i<0 || j<0 || i>=m || j>=n)
            return;

        if(grid[i][j]=='0')
            return;

        grid[i][j]='0';

        for(int k=0;k<4;k++)
            dfs(i+dr[k],j+dc[k],grid);
    }

    int numIslands(vector<vector<char>>& grid) {
         int m=grid.size();
        int n=grid[0].size();

        int ans=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                if(grid[i][j]=='1'){
                    ans++;
                    dfs(i,j,grid);
                }

            }
        }

        return ans;

    }
};