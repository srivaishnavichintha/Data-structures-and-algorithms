class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ct1=0,ct2=0,ele1,ele2;
        for(int i=0;i<nums.size();i++){
            if(ct1==0 && nums[i]!=ele2){
                ele1=nums[i];
                ct1++;
            }
            else if(ct2==0 && nums[i]!=ele1){
                ele2=nums[i];
                ct2++;
            }
            else if(ele1==nums[i])ct1++;
            else if(ele2==nums[i])ct2++;
            else{
                ct1--;
                ct2--;
            }
        }
        vector<int> ls;
        int cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(ele1==nums[i]) cnt1++;
            if(ele2==nums[i]) cnt2++;
        }
        int mini=(int)(nums.size()/3)+1;
        if(cnt1>=mini) ls.push_back(ele1);
        if(cnt2>=mini) ls.push_back(ele2);
        return ls;
    }
};