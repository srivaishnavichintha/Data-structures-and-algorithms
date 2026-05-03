class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];int eve=0;
            while(n>0){
                n=n/10;
                 eve++;
            }
            if(eve%2==0) res++;
        }
        return res;
    }
};