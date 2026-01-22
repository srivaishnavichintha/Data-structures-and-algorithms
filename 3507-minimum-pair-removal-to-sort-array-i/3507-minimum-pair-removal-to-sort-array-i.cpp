class Solution {
public:
    int sort(vector<int>& nums) {
        int sort = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                sort = 1;
                break;
            }
        }
        return sort;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int count=0;
        while (sort(nums) != 0) {
            int minSum = INT_MAX, index = 0;
            for (int i = 0; i < nums.size() - 1; i++) {
                int sum = nums[i] + nums[i + 1];
                if (sum < minSum) {
                    minSum = sum;
                    index = i;
                }
            }
            nums[index] = minSum;
            nums.erase(nums.begin() + index + 1);
            count++;
        };
        return count;
    }
};