class Solution {
public:
    vector<vector<int>> ans;
    void combsum(int i,vector<int>& vec, int target,vector<int>& arr){
        if(arr.size()==i){
            if(target==0)ans.push_back(vec);
            return;
        }
        if(arr[i]<=target){
            vec.push_back(arr[i]);
            combsum(i,vec,target-arr[i],arr);
            vec.pop_back();
        }
        combsum(i+1,vec,target,arr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> vec;
        combsum(0,vec,target,candidates);
        return ans;
    }
};