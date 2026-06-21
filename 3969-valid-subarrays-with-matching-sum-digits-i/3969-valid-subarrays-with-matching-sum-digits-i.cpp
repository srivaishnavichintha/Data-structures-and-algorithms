class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int l=0,count=0;
        for(int j=0;j<nums.size();j++){
            long long sum=0;
        for(int i=j;i<nums.size();i++){
             sum+=nums[i];
             int fg,lg;
             lg = sum % 10;
             long long temp = sum;
             while (temp >= 10) temp /= 10;
             fg = temp;
             if (fg == x&&lg == x)
                count++;
        }
        }
        return count;
    }
};