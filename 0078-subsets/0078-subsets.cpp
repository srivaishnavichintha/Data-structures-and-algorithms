class Solution {
public:
    vector<vector<int>> ans;
    void combsum(int i,vector<int>& vec,vector<int>& arr){
        if(arr.size()==i){
            ans.push_back(vec);
            return;
        }
        vec.push_back(arr[i]);
        combsum(i+1,vec,arr);
        vec.pop_back();
        combsum(i+1,vec,arr);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> res;
        combsum(0,res,nums);
        return ans;
    }
};