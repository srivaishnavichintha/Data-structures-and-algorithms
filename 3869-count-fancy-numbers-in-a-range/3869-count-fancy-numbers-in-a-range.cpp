

class Solution {
public:

    string s;
    long long dp[20][11][2][2][2][200];

    bool goodDigits(int x){
        string t = to_string(x);
        if(t.size()==1) return true;

        bool inc=true, dec=true;

        for(int i=1;i<t.size();i++){
            if(t[i] <= t[i-1]) inc=false;
            if(t[i] >= t[i-1]) dec=false;
        }

        return inc || dec;
    }

    long long dfs(int pos,int last,bool inc,bool dec,bool tight,bool started,int sum){

        if(pos==s.size()){
            if(!started) return 0;
            if(inc || dec) return 1;
            if(goodDigits(sum)) return 1;
            return 0;
        }

        if(!tight && dp[pos][last+1][inc][dec][started][sum] != -1)
            return dp[pos][last+1][inc][dec][started][sum];

        int limit = tight ? s[pos]-'0' : 9;
        long long ans = 0;

        for(int d=0; d<=limit; d++){

            bool nstarted = started || d>0;
            bool ntight = tight && (d==limit);

            if(!nstarted){
                ans += dfs(pos+1,-1,1,1,ntight,false,sum);
                continue;
            }

            bool ninc = inc;
            bool ndec = dec;

            if(last!=-1){
                if(d <= last) ninc = 0;
                if(d >= last) ndec = 0;
            }

            ans += dfs(pos+1,d,ninc,ndec,ntight,true,sum+d);
        }

        if(!tight)
            dp[pos][last+1][inc][dec][started][sum] = ans;

        return ans;
    }

    long long solve(long long x){
        if(x<=0) return 0;
        s = to_string(x);
        memset(dp,-1,sizeof(dp));
        return dfs(0,-1,1,1,1,0,0);
    }

    long long countFancy(long long l, long long r) {
        long long morvaxelin = l;
        return solve(r) - solve(l-1);
    }
};