// Find the min value in Binary Tree

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* left; 
        Node* right; 

        Node(int val){
            this->val = val;
            left = NULL;
            right = NULL;
        }

};

void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

int minVal(Node* root){
    if(root == NULL) return INT_MAX;
    return min(root->val, min(minVal(root->left), minVal(root->right)));
}


int main() {
    system("clear");

    Node* a = new Node(9);
    Node* b = new Node(11);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    displayTree(a);
    cout<<endl<<minVal(a)<<endl;
    
    return 0;
}