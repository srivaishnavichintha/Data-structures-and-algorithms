class Solution {
public:
    vector<int> getdivisors(int n) {
        vector<int> divisors;
        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                if (n / i == i) {
                    divisors.push_back(i);
                } else {
                    divisors.push_back(i);
                    divisors.push_back(n / i);
                }
            }
        }
        return divisors;
    }
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            vector<int> temp=getdivisors(nums[i]);
            if(temp.size()==4){
                sum+=accumulate(temp.begin(),temp.end(),0);
            }
        }
        return sum;
    }
};