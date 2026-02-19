class Solution {
public:
    int maxOperations(vector<int>& arr, int k) {
        unordered_map<int, int> um;
        unordered_set<int> st;

        vector<int> v;

        for(int num : arr) st.insert(num);
        for(auto num : st) v.push_back(num);

        for(int key : arr) um[key]++;
        int count = 0, i = 0;
        while(i < v.size()){
            if(v[i] > k) continue;
            int diff = k - v[i];

            if(st.find(diff) !=  st.end()){
                if(diff == v[i]) count += (min(um[diff], um[v[i]])/2);
                else count += min(um[diff], um[v[i]]);
                um.erase(diff);
                um.erase(v[i]);
            }
            i++;
        }
        return count;
    }
};