// Ques: Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :

//       *
//     *   *
//   *       *
// *           *
//   *       *
//     *   *
//       *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n-1; i++){
        for (int j = n-i; j > 0; j--){
            if(j == 1) cout << "* ";
            else cout << "  ";
        }
        for (int k = 0; k < 2*i; k++){
            if(k == 2*i-1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
            
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j) cout << "* ";
            else cout << "  ";
        }
        for (int j = n-i-1; j > 0; j--){
            if(j == 1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}