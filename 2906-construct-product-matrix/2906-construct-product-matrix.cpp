class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        long long product=1;
        vector<vector<int>> pref(grid.size(),vector<int>(grid[0].size()));
        vector<vector<int>> suff(grid.size(),vector<int>(grid[0].size()));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                pref[i][j]=product;
                product = (product * grid[i][j]) % 12345;
            }
        }
        product=1;
         for(int i=grid.size()-1;i>=0;i--){
            for(int j=grid[i].size()-1;j>=0;j--){
                 suff[i][j]=product;
                 product = (product * grid[i][j]) % 12345;
            }
        }
        vector<vector<int>> res(grid.size(),vector<int>(grid[0].size()));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                res[i][j]=(pref[i][j]*suff[i][j])%12345;
            }
        }
        return res;
    }
};