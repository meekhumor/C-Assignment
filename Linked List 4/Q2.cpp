// Ques: Leetcode[2181]

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* temp = head;
        ListNode* dummy = head->next;

        while(temp && temp->next){
            if(temp->val == 0) temp = temp->next;
            int sum = 0;
            while(temp && temp->val != 0){
                sum += temp->val;
                temp = temp->next;
            }
            dummy->val = sum;
            dummy->next = temp->next;
            dummy = dummy->next;
        }
        return head->next;
    }
};
