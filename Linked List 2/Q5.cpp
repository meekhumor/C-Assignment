// Ques: Find the length of loop in Cycle of Linked List.

class Solution {
public:
    int lengthCycleList(ListNode* head) {
        Node *slow = a;
        Node *fast = a;

        while(slow!=fast){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = slow->next;
        int count = 1;
        while(slow!=fast){
            slow = slow->next;
            count++;
        }
        return count;
    }
};
