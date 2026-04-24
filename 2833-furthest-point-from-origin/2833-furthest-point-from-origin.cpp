class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0;
        int res=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='L'){
                res--;
                l++;
            }
            else if(moves[i]=='R'){
                res++;
                r++;
            }
        }
        int u = moves.length() - (l + r);
        return abs(r - l) + u;;
    }
};