// Ques: Valid Parentheses [Leetcode - 20]

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        stack<char> helper;
        
        for(int i = s.size()-1; i >= 0; i--){
            st.push(s[i]);
        }

        while(!st.empty()){
            if(st.top() == '(' || st.top() == '{' || st.top() == '['){
                helper.push(st.top());
                st.pop();
            }
            else{
                if(!helper.empty()){
                    if((st.top() == ')' && helper.top() == '(') || (st.top() == '}' && helper.top() == '{') || (st.top() == ']' && helper.top() == '[')){
                        st.pop();
                        helper.pop();
                    } 
                    else return false;
                }
                else return false;
            }
        }
        if(helper.empty()) return true;
        else return false;
        
        
    }
};