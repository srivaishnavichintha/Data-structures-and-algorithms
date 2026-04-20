class Solution {
public:
    int maxDistance(vector<int>& colors) {
        // int maxdis=0;
        // for(int i=0;i<colors.size();i++){
        //     for(int j=colors.size()-1;j>i;j--){
        //         if(colors[j]!=colors[i]){
        //             maxdis=max(abs(j-i),maxdis);
        //             break;
        //         } 
        //     }
        // }
        // return maxdis;
        int n = colors.size();
        int maxdis = 0;

        for(int i = 0; i < n; i++){
            if(colors[i] != colors[0])
                maxdis = max(maxdis, i);

            if(colors[i] != colors[n-1])
                maxdis = max(maxdis, n-1-i);
        }

        return maxdis;
    }
};