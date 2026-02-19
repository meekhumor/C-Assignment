// Q1: Relative Sort Array [LC 1122]

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> um;
        for(int i = 0; i < arr1.size(); i++) um[arr1[i]]++;

        int i = 0, j = 0;
        while(j < arr2.size()){
            if(um[arr2[j]] == 0)  um.erase(arr2[j]);
            if(um[arr2[j]] > 0){
                arr1[i] = arr2[j];
                i++;
                um[arr2[j]]--;
            }
            else j++;
        }
        vector<int> remaining;
        for(auto& [key, count] : um) {
            while(count--) remaining.push_back(key);
        }

        sort(remaining.begin(), remaining.end());

        for(int num : remaining) {
            arr1[i++] = num;
        }

        return arr1;

    }
};