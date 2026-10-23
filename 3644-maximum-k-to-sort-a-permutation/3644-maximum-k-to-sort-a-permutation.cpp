class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        bool t=true;
        int temp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                if(t){
                    temp=nums[i];
                    t=false;
                }
                else{
                    temp&=nums[i];
                }
            }
        }
        return temp;
    }
};