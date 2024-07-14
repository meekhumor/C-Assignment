// Ques: Leetcode [1669]

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        ListNode* start = NULL;
        int n = 0;
        while(n <= b){
            if(n == a-1) start = temp;
            temp = temp->next;
            n++;
        }
        start->next = list2;
        while(list2->next != NULL){
            list2 = list2->next;
        }
        list2->next = temp;
        return list1;

    }
};
