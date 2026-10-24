class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> days={0,31,59,90,120,151,181,212,243,273,304,334,365};

        auto convert=[&](string s) {
            int m=stoi(s.substr(0,2));
            int d=stoi(s.substr(3,2));
            return days[m-1]+d;
        };
        int a=convert(arriveAlice);
        int b=convert(leaveAlice);
        int c=convert(arriveBob);
        int d=convert(leaveBob);

        int start=max(a,c);
        int end=min(b,d);

        return max(0,end-start+1);
    }
};