class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
         vector<int> res;
         for(int i=0;i<arr.size();i++){
             auto it = lower_bound(res.begin(), res.end(), arr[i]);
            if (it == res.end())
                res.push_back(arr[i]);
            else
                *it = arr[i];
         }
         return res.size();
    }
};