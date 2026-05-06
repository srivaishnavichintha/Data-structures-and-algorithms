class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxgrid) {
        vector<vector<char>> grid(boxgrid[0].size(), vector<char>(boxgrid.size()));
        for(int i=0;i<boxgrid.size();i++){
            for(int j=0;j<boxgrid[0].size();j++){
                grid[j][i]=boxgrid[i][j];
            }
        }
        for(int i=0;i<grid.size();i++){
            reverse(grid[i].begin(),grid[i].end());
        }
        int l=0;
        for(int i=0;i<grid[0].size();i++){
            l=0;
            for(int j=0;j<grid.size();j++){
                if(grid[j][i]=='*')
                   l=j+1;
                else if(grid[j][i]=='.')
                   {
                     swap(grid[j][i],grid[l][i]);
                     l++;
                   }
            }
        }
        return grid;
    }
};