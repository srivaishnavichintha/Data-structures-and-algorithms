class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct=nums[0];
        int curproduct=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            int curr=nums[i];
            if (curr < 0) {
                swap(maxproduct, curproduct);
            }
            maxproduct = max(curr, maxproduct * curr);
            curproduct = min(curr, curproduct * curr);

            res = max(res, maxproduct);
        }
        return res;
    }
};