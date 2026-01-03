class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> temp;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int val=target-nums[i];
            if(temp.find(val)!=temp.end() && temp[val]!=i){
                res.push_back(temp[val]);
                res.push_back(i);
                return res;
            }
        }
        return res;
    }
};