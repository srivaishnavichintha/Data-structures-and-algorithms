class Solution {
public:
    char processStr(string s, long long k) {
        const long long INF = 4e18;
        long long len = 0;
        for (char c : s) {
            if (c == '*') {
                if (len > 0) len--;
            }
            else if (c == '#')  len = min(len * 2, INF); 
            else if (c == '%') continue;
            else  len = min(len + 1, INF);
        }
        if (len <= k) return '.';
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                if (len - 1 == k)
                    return s[i];
                len--;
            }
            else if (s[i] == '%')   k = len - 1 - k;
            else if (s[i] == '#') {
                long long half = len / 2;
                if (k >= half)
                    k -= half;
                len = half;
            }
            else if (s[i] == '*') len++;
        }
        return '.';
    }
};