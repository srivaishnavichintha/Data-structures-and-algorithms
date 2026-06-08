class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> res(nums.size());
        int l = 0 ,r = nums.size() - 1;
        int i=0,j=nums.size()-1;
        while(i<nums.size()){
            if (nums[i] < pivot) {
                res[l++] = nums[i];
            }
            if (nums[j] > pivot) {
                res[r--] = nums[j];
            }
            i ++;
            j --;
        }
        while (l<=r) {
            res[l++] = pivot;
        }
        return res;
    }
};