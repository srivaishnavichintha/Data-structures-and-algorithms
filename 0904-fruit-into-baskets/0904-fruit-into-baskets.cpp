class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> freq;
        int maxi = 0;
        int i = 0, j = 0;
        while (j < fruits.size()) {
            freq[fruits[j]]++;
            while (freq.size() > 2) {
                freq[fruits[i]]--;
                if (freq[fruits[i]] == 0)
                    freq.erase(fruits[i]);
                i++;
            }
            maxi = max(maxi, j - i + 1);
            j++;
        }

        return maxi;
    }
};