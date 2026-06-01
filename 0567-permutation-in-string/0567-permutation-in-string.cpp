class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         vector<int> freq(26, 0);
        vector<int> win(26, 0);
        int n = s1.size();
        int m = s2.size();
        if (m >= n) {

            for (int i = 0; i < n; i++) {
                int idx = s1[i] - 'a';
                freq[idx]++;
            }

            for (int i = 0; i < n; i++) {
                int idx = s2[i] - 'a';
                win[idx]++;
            }
            if (win == freq) {
                return true;
            }
            for (int i = n; i < m; i++) {
                int idx1 = s2[i] - 'a';
                win[idx1]++;
                int idx2 = s2[i - n] - 'a';
                win[idx2]--;
                if (win == freq) {
                    return true;
                }
            }
        }

        return false;
    }
};