class Solution {
public:
    set<string> dfs(int &i, string &s) {
        set<string> res;
        vector<string> cur(1, "");
        while (i < s.size() && s[i] != '}') {
            if (s[i] == '{') {
                i++;
                set<string> temp = dfs(i, s);
                i++;
                vector<string> next;
                for (string a : cur) {
                    for (string b : temp) {
                        next.push_back(a + b);
                    }
                }
                cur = next;
            }
            else if (s[i] == ',') {
                for (string x : cur)
                    res.insert(x);
                cur.clear();
                cur.push_back("");
                i++;
            }
            else {
                for (string &x : cur)
                    x += s[i];
                i++;
            }
        }
        for (string x : cur)
            res.insert(x);
        return res;
    }
    vector<string> braceExpansionII(string expression) {
        int i = 0;
        set<string> st = dfs(i, expression);
        vector<string> res;
        for (string x:st)
            res.push_back(x);
        return res;
    }
};