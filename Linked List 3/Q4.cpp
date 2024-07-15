// Ques: Leetcode[2]

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        ListNode* curr = l1;
        ListNode* prev = l1;
        int carry = 0, sum = 0;
        while(curr){
            if(l2) {
                sum = curr->val + l2->val + carry;
                l2 = l2->next;
            }
            else sum = curr->val + carry; 
            carry = sum/10;
            curr->val = sum%10;

            prev = curr;
            curr = curr->next;
        } 
        if(l2){
            prev->next = l2;
            while(l2){
                sum = l2->val + carry; 
                carry = sum/10;
                l2->val = sum%10;

                prev = l2;
                l2 = l2->next;
            }  
        }
        if(carry){
            ListNode* extra = new ListNode(carry);
            prev->next = extra;
        }
        return l1;
    }
};