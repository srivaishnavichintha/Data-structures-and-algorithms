class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
         int k = 10000;
        for(int i = 0; i < n; i++) {

            nums[2*i]     += (nums[i] % k) * k;
            nums[2*i + 1] += (nums[i+n] % k) * k;
        }
        for(int i = 0; i < 2*n; i++) {
            nums[i] /= k;
        }

        return nums;
    }
};