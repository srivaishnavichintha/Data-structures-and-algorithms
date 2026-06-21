class Solution {
public:
    int maxDistance(string moves) {
        int x2=0,y2=0,carry=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L')x2--;
            else if(moves[i]=='D')y2--;
            else if(moves[i]=='U')y2++;
            else if(moves[i]=='R')x2++;
            else{
                carry++;
            }
        }
        return abs(x2)+abs(y2)+carry;
    }
};