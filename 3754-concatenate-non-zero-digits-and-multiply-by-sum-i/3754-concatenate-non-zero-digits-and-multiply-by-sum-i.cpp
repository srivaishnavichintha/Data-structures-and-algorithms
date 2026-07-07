class Solution {
public:
    long long sumAndMultiply(int n) {
         long long res=0;
         long long sum=0;
         while(n>0){
            if(n%10!=0){
                res=(res*10)+ (n%10);
                sum+= n%10;
            }
            n=n/10;
         }
         long long ares=0;
         while(res>0){
            if(res%10!=0){
                ares=(ares*10)+ (res%10);
            }
            res=res/10;
         }
         return ares*sum;
    }
};