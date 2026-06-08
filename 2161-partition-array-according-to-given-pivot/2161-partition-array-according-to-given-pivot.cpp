class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> res(n);
        int l = 0 ,r = n - 1;
        int i=0,j=n-1;
        while(i<n){
            if (nums[i] < pivot) {
                res[l] = nums[i];
                l++;
            }
            if (nums[j] > pivot) {
                res[r] = nums[j];
                r--;
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