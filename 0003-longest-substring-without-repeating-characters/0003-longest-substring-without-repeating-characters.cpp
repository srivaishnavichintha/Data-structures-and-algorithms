class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_map<char,int> mp;
      if(s.size()==0) return 0;
      int maxi=0;
      int i=0;
      for(int j=0;j<s.size();j++){
         if(mp.count(s[j]) && mp[s[j]]>=i){
             i=mp[s[j]]+1;
         }
         maxi=max(maxi,j-i+1);
         mp[s[j]]=j;
      }
      return maxi;
    }
};