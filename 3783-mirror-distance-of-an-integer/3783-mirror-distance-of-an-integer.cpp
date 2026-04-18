class Solution {
public:
    int mirrorDistance(int n) {
        int diff=n;
        long long reversed;
         while (n != 0) {
        int digit = n % 10;
        reversed = (reversed * 10) + digit;
        if (reversed > INT_MAX || reversed < INT_MIN) return 0;
        n /= 10;
       }
       return abs(reversed-diff);
    }
};