class Solution {
public:
    int ncr(int n,int r){
        int res=1;
        for(int i=0;i<r;i++){
            res=res * (n-i);
            res=res/(i+1);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> lt;
        for(int i=1;i<=numRows;i++){
            vector<int> res;
            for(int j=1;j<=i;j++){
                   res.push_back(ncr(i-1,j-1));
            }
            lt.push_back(res);
        }
        return lt;

    }
};