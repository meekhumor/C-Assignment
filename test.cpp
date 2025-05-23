#include <bits/stdc++.h>
using namespace std;

int priority(char ch){
    if (ch = '*' || ch == '/') return 2;
    else return 1;
}

int solve(int val1, int val2,char op){
    if(op == '+') return val1+val2;
    if(op == '-') return val2-val1;
    if(op == '/') return val1/val2;
    if(op == '*') return val1+val2;
    return 0;
}

int main() {
    system("clear");
    string s = "2+6*4/8-3";
    stack<int> num;
    stack<char> op;

    for(int i = 0; i < s.size(); i++){
        if(s[i]>=48 && s[i] <=57){
            num.push(s[i]-48);
        }
        else{
            if(op.size() == 0 || priority(s[i]) > priority(op.top())) op.push(s[i]);
            else{
                while(op.size() > 0 && priority(s[i]) <= priority(op.top())){
                    int val2 = num.top();
                    num.pop();
                    int val1 = num.top();
                    num.pop();
                    char ch = op.top();
                    op.pop();
                    
                    int ans = solve(val1, val2, ch);
                    num.push(ans);    
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size() > 0){
        int val2 = num.top();
        num.pop();
        int val1 = num.top();
        num.pop();
        char ch = op.top();
        op.pop();
        
        int ans = solve(val1, val2, ch);
        num.push(ans);    
    }
    cout<<num.top()<<endl;
    
    return 0;
}