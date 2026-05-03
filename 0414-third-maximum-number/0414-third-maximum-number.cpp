class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long fir=LONG_MIN,sec=LONG_MIN,thir=LONG_MIN;
        for(int i=0;i<nums.size();i++){
             if (nums[i] == fir || nums[i] == sec || nums[i] == thir) continue;
             if(nums[i]>fir){
                thir=sec;
                sec=fir;
                fir=nums[i];
             }
             else if(nums[i]>sec){
                thir=sec;
                sec=nums[i];
             }
             else if(nums[i]>thir){
                thir=nums[i];
             }
        }
        return (thir==LONG_MIN)?fir:thir;
    }
};