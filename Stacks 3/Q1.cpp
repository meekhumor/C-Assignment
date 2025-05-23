// Ques: Baseball game. [Leetcode 682]

class Solution {
public:
    int calPoints(vector<string>& v) {
        stack<int> st;
        vector<int> ans;

        for(int i = 0; i < v.size(); i++){
            if(v[i] == "+"){
                int n = ans.size();
                ans.push_back(ans[n-1]+ans[n-2]);
            }
            else if(v[i] == "C"){
                ans.pop_back();
            }
            else if(v[i] == "D"){
                int n = ans.size();
                ans.push_back(ans[n-1]*2);
            }
            else {
                int n = stoi(v[i]);
                st.push(n);
                ans.push_back(n);
            }
        }
        int sum = 0;
        for(int i = 0; i < ans.size(); i++){
            sum += ans[i];
        }
        return sum;
    }
};