class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int pf=1,sf=1;
       int maxpro=INT_MIN;
       for(int i=0;i<nums.size();i++){
          pf*=nums[i];
          maxpro=max(maxpro,pf);
          if(pf==0) pf=1;
          
       }
       for(int i=nums.size()-1;i>=0;i--){
        sf*=nums[i];
        maxpro=max(maxpro,sf);
        if(sf==0) sf=1;
        
       }
       return maxpro;
    }
};