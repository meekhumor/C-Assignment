// Ques: Final Prices with a Special Discount in a Shop [Leetcode - 1475]

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> v;
        stack<int> st;
        st.push(prices[n-1]);
        v.push_back(prices[n-1]);
        for(int i = n-2; i >= 0; i--){
            while (!st.empty() && st.top() > prices[i]){
                st.pop();
            }
            if(!st.empty()) v.push_back(prices[i] - st.top());
            else v.push_back(prices[i]);
            st.push(prices[i]);
        }
        reverse(v.begin(), v.end());
        return v;
    }
};