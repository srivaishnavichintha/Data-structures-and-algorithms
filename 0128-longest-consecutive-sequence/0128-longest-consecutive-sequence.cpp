class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        unordered_set<int> vec(nums.begin(),nums.end());
        int longest=1;
        for(auto it: vec){
            if(!vec.count(it-1)){
                int x=it;
                int count=1;
                while(vec.count(x+1)){
                  x=x+1;
                  count++;   
            }
            longest=max(count,longest);
            }
        }
        return longest;
    }
};