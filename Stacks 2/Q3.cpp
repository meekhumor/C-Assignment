// Ques: Final Prices with a Special Discount in a Shop [Leetcode - 1475]

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        vector<int> v;
        int n = prices.size();

        st.push(prices[n-1]);
        v.push_back(0);

        for(int i = n-2; i >= 0; i--){
            int curr = prices[i];

            while(!st.empty() && st.top() > curr){
                st.pop();
            }
            if(!st.empty()) v.push_back(st.top());
            else v.push_back(0);
            st.push(prices[i]);
        }
        reverse(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++){
            prices[i] -= v[i];
        }
        return prices;
    }
};