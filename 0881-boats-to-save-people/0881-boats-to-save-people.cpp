class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count=0;
        int i=0,j=people.size()-1;
        while(i<=j){
            int weight=people[i]+people[j];
            if(weight<=limit){
                i++;
                j--;
            }
            else{
               j--;
            }
            count++;
        }
        return count;
    }
};