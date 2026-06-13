class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string str;
        for(int i=0;i<words.size();i++){
           const string& s=words[i];
           int sum=0;
           for(int i=0;i<s.size();i++){
                sum+=weights[s[i] - 'a'];
           }
           sum%=26;
           sum=26-sum-1;
           str.push_back('a'+sum);
        }
        return str;
    }
};