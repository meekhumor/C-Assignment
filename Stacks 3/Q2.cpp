// Ques: Remove nodes from a linked list. [Leetcode 2487]

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
    ListNode* removeNodes(ListNode* head) {
        stack<int> st;
        st.push(head->val);
        while(head->next){
            int curr = head->next->val;
            while(!st.empty() && curr > st.top()){
                st.pop();
            }
            st.push(curr);
            head = head->next;
        }
        stack<int> helper;
        while(!st.empty()){
            helper.push(st.top());
            st.pop();
        }

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while(!helper.empty()){
            ListNode* temp2 = new ListNode(helper.top());
            temp->next = temp2;
            temp = temp->next;
            helper.pop();
        }
        return dummy->next;
    }
};