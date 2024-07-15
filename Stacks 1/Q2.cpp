// Ques: Remove kth element from top in a given stack.
// Hint : Use another stack, just like insertion question.

#include <bits/stdc++.h>
using namespace std;

void print(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main()
{
    system("cls");
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    stack<int> st;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }
    cout << "Enter the index of the element to be removed: ";
    cin >> k;

    stack<int> temp;
    for (int i = 0; i <= k; i++){
        int x = st.top();
        st.pop();
        if(i != k) temp.push(x);
    }
    for (int i = 0; i <= k-1; i++){
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
    print(st);

    return 0;
}