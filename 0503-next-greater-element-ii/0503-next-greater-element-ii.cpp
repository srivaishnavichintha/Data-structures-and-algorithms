class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> stack, res(nums.size(), -1);
        for (int i = 0; i < nums.size() * 2; ++i) {
            while (stack.size() && nums[stack.back()]<nums[i % nums.size()]) {
                res[stack.back()]=nums[i % nums.size()];
                stack.pop_back();
            }
            stack.push_back(i % nums.size());
        }
        return res;
    }
};