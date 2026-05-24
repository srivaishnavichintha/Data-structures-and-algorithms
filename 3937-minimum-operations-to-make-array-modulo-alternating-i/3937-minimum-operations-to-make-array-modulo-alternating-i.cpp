class Solution {
public:
    int dist(int a, int b, int k) {
        int d = abs(a - b);
        return min(d, k - d);
    }
    int minOperations(vector<int>& nums, int k) {
          vector<int> mp = nums;
        int n = nums.size();
        int res = INT_MAX;
        for(int i= 0; i< k; i++) {
            for(int j= 0; j< k; j++) {
                if(i == j) continue;
                int c = 0;
                for(int l = 0; l < n; l++) {
                    int rem = nums[l] % k;
                    if(l % 2 == 0) {
                        c += dist(rem,i,k);
                    }
                    else {
                        c += dist(rem,j,k);
                    }
                }
                res= min(res,c);
            }
        }
        return  res;
    }
};