class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<std::string> words;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            words.push_back(word);
        }

        if (words.size() != pattern.length()) {
            return false;
        }

        unordered_map<char, std::string> map_c_w;
        unordered_map<std::string, char> map_w_c;

        for (int i = 0; i < pattern.length(); ++i) {
            char ch = pattern[i];
            std::string& current_word = words[i];

            if (map_c_w.count(ch) && map_w_c.count(current_word)) {
                if (map_c_w[ch] != current_word || map_w_c[current_word] != ch) {
                    return false;
                }
            } else if (map_c_w.count(ch) || map_w_c.count(current_word)) {
                return false;
            } else {
                map_c_w[ch] = current_word;
                map_w_c[current_word] = ch;
            }
        }
        return true;
    }
};