// Ques: Leetcode[1721]

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp = head;
        for(int i = 0; i < k - 1; i++){
            temp = temp->next;
        }
        ListNode *p1 = temp->next , *p2 = head;
        while(p1){
            p1 = p1->next;
            p2 = p2->next;
        }
        swap(temp->val , p2->val);
        return head;
    }
};