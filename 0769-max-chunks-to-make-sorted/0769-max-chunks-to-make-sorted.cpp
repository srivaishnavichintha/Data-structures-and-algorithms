class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
         vector<int> prefix(arr.size());
         int sum=0,temp=0;
         int count=0;
         for(int i=0;i<arr.size();i++){
            sum += arr[i];
            temp += i;
            if (sum == temp) {
                count++;
            }
         }
         return count;
    }
};