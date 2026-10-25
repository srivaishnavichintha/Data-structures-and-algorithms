class Solution {
public:
    int countStaircase(vector<int>& nums) {
      int count=0;
      for(int i=0;i<nums.size();i++){
          vector<int> arr;
          unordered_map<int,int> mp;
          for(int j=i;j<nums.size();j++){
              if(mp[nums[j]]==0) arr.push_back(nums[j]);
              mp[nums[j]]++;
              bool temp=true;
              for(int k=0;k<arr.size();k++){
                  if(mp[arr[k]]!=k+1){
                      temp=false;
                      break;
                  }
              }
              if(temp)count++;
          }
      }
      return count;
    }
};