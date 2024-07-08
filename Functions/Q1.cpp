// Ques: Write a function to print squares of first n natural numbers, taking n as argument to the function

#include <bits/stdc++.h>
using namespace std;

void displaySquares(int n){
    for(int i = 1; i <= n; i++){
        cout << i*i << " ";
        cout << endl;
    }   
}
int main()
{
    system("cls");
    int n;
    cout << "Enter n: ";
    cin >> n;

    displaySquares(n);
    return 0;
}