class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str="";
        int size=min(word1.size(),word2.size());
        for(int i=0;i<size;i++){
            str+=word1[i];
            str+=word2[i];
        }
        if(word1.size()>word2.size()){
            str += word1.substr(size);
        }
        else{
           str += word2.substr(size);
        }
        return str;
    }
};