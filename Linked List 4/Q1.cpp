// Ques: Leetcode [24]

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* prev = new ListNode(-1);
        ListNode* curr = head;
        ListNode* nxt = curr->next;
        head = prev;

        while(curr && curr->next){
            prev->next = nxt;
            curr->next = curr->next->next;
            nxt->next = curr;
            prev = curr;
            curr = curr->next;
            if(curr) nxt = curr->next;
        }

        return head->next;
    }
};