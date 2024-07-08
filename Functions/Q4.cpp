// Ques: Write a function to count the number of digits in a number and then print the square of this number.

#include <bits/stdc++.h>
using namespace std;

int digits(int n){
    int count = 0;
    while(n!= 0){
        n = n/10;
        count++;
    }
    return count;
}
int main()
{
    system("cls");
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << digits(n);
    return 0;
}