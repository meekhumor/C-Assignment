// Ques: Leetcode [2130]

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *next = NULL;

        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        if (!head || !head->next) return 0;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* reverse = reverseList(slow->next);
        slow->next = reverse;
        slow = slow->next;
        int maxSum = INT8_MIN;
        int sum = 0;
        while(slow && head){
            sum = head->val + slow->val;
            maxSum = max(maxSum, sum);
            head = head->next;
            slow = slow->next;
        }
        return maxSum;
        
    }
};