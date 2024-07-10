// Ques: Print the following pattern
// Sample Input : n = 4
// Sample Output :

// * * * * * * *
// * * *   * * *
// * *       * *
// *           *
// * *       * *
// * * *   * * *
// * * * * * * *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < 2*n - 1; i++){
        cout << "* ";
    }
    cout << endl;
    for (int i = 0; i < n-1; i++){
       for (int j = n-i-1; j > 0; j--){
            cout << "* ";
       }
       for (int j = 0; j < 2*i + 1; j++){
            cout << "  ";
       }
       for (int j = n-i-1; j > 0; j--){
            cout << "* ";
       }
       cout << endl;
    }
    for (int i = 0; i < n-2; i++){
       for (int j = 0; j < i+2; j++){
            cout << "* ";
       }
       for (int j = 0; j < 2*(n-i) - 5; j++){
            cout << "  ";
       }
       for (int j = 0; j < i+2; j++){
            cout << "* ";
       }
       cout << endl;
    }
            
    for (int i = 0; i < 2*n - 1; i++){
        cout << "* ";
    }
    return 0;
}