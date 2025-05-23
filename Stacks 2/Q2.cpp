// Ques: Next Greater Node in Linked List [Leetcode - 1019]

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int> st;
        stack<int> helper;
        vector<int> v;

        while(head){
            st.push(head->val);
            head = head->next;
        }

        while(!st.empty()){
            int curr = st.top();
            st.pop();

            while(!helper.empty() && helper.top() <= curr){
                helper.pop();
            }

            if(!helper.empty()) v.push_back(helper.top());
            else v.push_back(0);

            helper.push(curr);
        }
        reverse(v.begin(), v.end());
        return v;
    }
};