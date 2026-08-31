class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
         int count = 0;
        while (true) {
            bool sorted = true;
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] < nums[i - 1]) {
                    sorted = false;
                    break;
                }
            }
            if (sorted)
                break;
            int mini = INT_MAX;
            int idx = 0;
            for (int i = 0; i < nums.size() - 1; i++) {
                if (nums[i] + nums[i + 1] < mini) {
                    mini = nums[i] + nums[i + 1];
                    idx = i;
                }
            }
            nums[idx] = mini;
            nums.erase(nums.begin() + idx + 1);
            count++;
        }

        return count;
    }
};