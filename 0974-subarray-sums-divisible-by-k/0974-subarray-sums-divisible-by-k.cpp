class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> prefixcount;
        prefixcount[0]=1;
        int count=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int remainder = sum % k;
            while(remainder < 0)
                remainder += k;
            if (prefixcount.count(remainder))
                count += prefixcount[remainder];
            prefixcount[remainder]++;
        }
        return count;
    }
};