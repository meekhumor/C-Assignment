// Ques: Leetcode [2095]

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int v){
        val = v;
        next = NULL;
    }
};

class Solution {
public:
    Node* deleteMiddle(Node* head) {
        if (!head) return head;

        Node* temp = head;
        int n = 0;
        while(temp!=NULL){
            temp = temp->next;
            n++;
        }

        if (n <= 2) {  
            if (n == 1) return NULL;
            head->next = head->next->next;
            return head;
        }

        Node* temp2 = head;
        for(int i = 0; i < (n/2)-1; i++){
            temp2 = temp2->next;
        }
        temp2->next = temp2->next->next;
        return head;
    }
};
int main()
{
    system("cls");
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    Solution sol;
    Node* ans = sol.deleteMiddle(head);
    while(ans!=NULL){
        cout<<ans->val<<" ";
        ans = ans->next;
    }
    
    return 0;
}