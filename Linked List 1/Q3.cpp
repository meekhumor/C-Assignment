// Ques: Implement a Linked List class.
// The user defined LL should have insert (head,tail,idx) , delete(head,tail,idx) , get(idx) and display functions.

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
class LinkedList{
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void insertHead(int val){
        Node *temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertTail(int val){
        Node *temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertIdx(int val, int idx){
        if(idx<0 || idx>size) cout<<"Invalid Index";
        else if(idx == 0){
            insertHead(val);
        }
        else if(idx == size){
            insertTail(val);
        }
        else{
            Node *temp = new Node(val);
            Node *temp2 = head;
            for(int i = 0; i < idx-1; i++){
                temp2 = temp2->next;
            }
            temp->next = temp2->next;
            temp2->next = temp;
            size++;
        }
    }
    void deleteHead(){
        if(size == 0){
            cout<<"List_is_Empty ";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteTail(){
        if(size == 0){
            cout<<"List_is_Empty ";
            return;
        }
        Node *temp = head;
        while(temp->next!= tail){
            temp = temp->next;
        }
        tail->next = NULL;
        tail = temp;
        size--;
    }
    void deleteIdx(int idx){
        if(idx<0 || idx>size) {
            cout<<"Invalid Index";
            return;
        }
        else if(idx == 0){
            deleteHead();
        }
        else if(idx == size){
            deleteTail();
        }
        else{
            Node *temp = head;
            for(int i = 0; i < idx-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    int get(int idx){
        if(idx<0 || idx>size) return -1;
        else{
            Node *temp = head;
            for(int i = 0; i < idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void display(){
        if(head == NULL){
            cout << "List is empty" << endl;
        }
        else{
            Node *temp = head;
            while(temp!= NULL){
                cout << temp->val << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};
int main()
{
    system("cls");
    LinkedList ll;
    ll.insertTail(29);
    ll.insertTail(27);
    ll.insertTail(26);
    ll.insertTail(25);
    ll.display();
    ll.insertHead(2);
    ll.display();
    ll.insertIdx(10,1);
    ll.display();
    ll.deleteIdx(0);
    ll.display();
    cout << ll.get(3);
    return 0;
}