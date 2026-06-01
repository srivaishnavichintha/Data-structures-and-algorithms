class Solution {
public:
    int strStr(string haystack, string needle) {
         int window = 0;
        int lastfound = -1;
        bool find = false;

        if(haystack.size() < needle.size()){
            return -1;
        }

        for(int i = 0; i < haystack.size(); i++){
            if(haystack[i] == needle[window]){
                if(!find){
                    lastfound = i;
                    find = true;
                }
                
                window++;
                if(window == needle.size()){
                    return lastfound;
                }
            } else {
                if(find){
                    i = lastfound; 
                    window = 0;
                    find = false;
                    lastfound = -1;
                }
            }
        }

        return -1;
    }
};