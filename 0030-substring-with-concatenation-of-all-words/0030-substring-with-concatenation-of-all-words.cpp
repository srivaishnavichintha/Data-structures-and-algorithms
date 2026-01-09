class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int w = words[0].length();
        int t = w * words.size();
        unordered_map<string, int> word;
        for (int i = 0; i < words.size(); i++) {
            word[words[i]]++;
        }
        vector<int> result;
        for (int i = 0; i < w; i++) {
            int l = i;
            int count = 0;
            unordered_map<string, int> seen;

            for (int r= i; r + w <= s.size(); r += w) {
                string str = s.substr(r, w);

                if (word.count(str)) {
                    seen[str]++;
                    count++;

                    while (seen[str] > word[str]) {
                        string lw = s.substr(l, w);
                        seen[lw]--;
                        l += w;
                        count--;
                    }

                    if (count == words.size())
                        result.push_back(l);
                } else {
                    seen.clear();
                    count = 0;
                    l = r + w;
                }
            }
        }
        return result;
    }
};