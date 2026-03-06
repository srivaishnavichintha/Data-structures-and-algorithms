class Solution {
public:
    bool checkOnesSegment(string s) {
        int mcount=0;
        // if(s[0]=='1') count++;
        int i=0;
        while(i<s.length()){
            int count=0;
            while(i<s.length() && s[i]=='1'){
              count++;
              i++;
            }
            if(count>0)mcount++;
            i++;
        }
        return mcount==1;
       
    }
};