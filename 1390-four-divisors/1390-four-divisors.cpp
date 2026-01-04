class Solution {
public:
    int sumFourDivisors(vector<int>& v) {
        int totalsum = 0;
        for(int i = 0; i < v.size(); i++) {
            int cnt = 0, sum = 0;
            int num = v[i];
            
            for(int j = 1; j * j <= num; j++) {
                if(num % j == 0) {
                    sum += j;
                    cnt++;
                    
                    if(j != num / j) {
                        sum += num / j;
                        cnt++;
                    }
                }
            }
            
            if(cnt == 4) {
                totalsum += sum;
            }
        }
        return totalsum;
    }
};