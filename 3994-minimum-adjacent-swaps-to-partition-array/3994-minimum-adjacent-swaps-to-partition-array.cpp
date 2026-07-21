class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        long long p2=0,p3=0;
        long long res=0;
        for(int i=0;i<nums.size();i++){
              if (nums[i] < a) {
                res += p2 + p3;
            } else if (nums[i] > b) {
                p2++;
            } else {
                res += p2;
                p3++;
            }
        }
        return res % 1000000007;

    }
};