class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;
        if (n == 1)
            return true;
        int num=n;
        for (int i = 2; i < 6 && num; i++)
            while (num % i == 0)
                num /= i;
        return num == 1;
    }
};