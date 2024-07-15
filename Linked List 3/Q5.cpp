// Leetcode [1290]

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if(!head || !head->next) return head->val;
        ListNode *temp = head;
        int decimal = 0;
        int n = 0;
        while(temp){
            temp = temp->next;
            n++;
        }
        while(head){
            decimal += head->val * pow(2,n-1);
            head = head->next;
            n--;
        }
        return decimal;
    }
};