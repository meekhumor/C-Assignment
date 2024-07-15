// Ques: Leetcode [328]

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* even = new ListNode(-1);
        ListNode* edummy = even;
        ListNode* odd = new ListNode(-1);
        ListNode* dummy = head;

        while(dummy){
            int val = dummy->val;
            if(val%2 == 0) {
                even->next = dummy;
                even = even->next;
            }
            else {
                odd->next = dummy;
                if(odd->val == -1) head = dummy; 
                odd = odd->next;
            }
            dummy = dummy->next;
        }
        odd->next = edummy->next;
        even->next = NULL;
        return head;
    }
};