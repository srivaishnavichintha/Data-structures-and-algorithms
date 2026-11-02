class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int moves=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int med=n/2;
        for(int i=0;i<nums.size();i++){
            moves+=abs(nums[i]-nums[med]);
        }
        return moves;
    }
};