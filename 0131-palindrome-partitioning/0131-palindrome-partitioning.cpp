class Solution {
public:
    void solvepart(int ind,string s,vector<string>& path,vector<vector<string>>& res){
        if(ind==s.size()){
            res.push_back(path);
            return;
        }
        for(int i=ind;i<s.size();i++){
             if(ispalindrome(s.substr(ind,i-ind+1))){
                 path.push_back(s.substr(ind,i-ind+1));
                 solvepart(i+1,s,path,res);
                 path.pop_back();
             }
        }
        return;
    }
    bool ispalindrome(string s){
        int l=0,r=s.size()-1;
        while(l<=r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        solvepart(0,s,path,res);
        return res;
    }
};