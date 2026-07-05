class Solution {
public:
    string simplifyPath(string path) {
       vector<string> st;;
       string str="";
        if(path[path.size()-1]!='/') path+='/';
        for(int r=0;r<path.size();r++){
            if(path[r]=='/'){
                if(str.size()>0){
                if(str==".") str="";
                else if(str==".."){
                    if(st.size()>0) st.pop_back();
                }
                else st.push_back(str);
               }
               str="";
            }
            else{
               str+=path[r];
            }
        } 
        str="";
        for(int i=0;i<st.size();i++){
            str+='/';
            str+=st[i];
        }
        if(str.size()==0) return "/";
        return str;
    }
};