class Solution {
public:
    string minWindow(string s, string t) {
        int start = 0;
        int minLen = INT_MAX;
        if (t.size() > s.size())
            return "";
        unordered_map<char, int> mp;
        int match = 0;
        int i = 0;
        for (int i = 0; i < t.size(); i++)
            mp[t[i]]++;
        for (int j = 0; j < s.size(); j++) {
            if (mp.count(s[j])) {
                if (mp[s[j]] > 0)
                    match++;
                mp[s[j]]--;
            }
            while (match == t.size()) {
                if (j - i + 1 < minLen) {
                    minLen = j - i + 1;
                    start = i;
                }
                if (mp.count(s[i])) {
                    mp[s[i]]++;
                    if (mp[s[i]] > 0)
                        match--;
                }
                i++;
            }
        }
        if (minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};