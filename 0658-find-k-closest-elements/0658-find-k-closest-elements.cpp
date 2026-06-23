class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        if(k>arr.size())  return arr;
        int point=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        int l = point - 1;
        int r = point;
        while(r-l-1<k){
            if(l<0){
                r++;
                continue;
            }
            else if(r >= arr.size()){
                l--;
                continue;
            }
            if(abs(arr[l] - x)<abs(arr[r] - x))l--;
            else if(abs(arr[l] - x)>abs(arr[r] - x))r++;
            else if(abs(arr[l] - x)==abs(arr[r] - x))l--;
        }
        return vector<int>(arr.begin()+l+1,arr.begin()+r);
    }
};