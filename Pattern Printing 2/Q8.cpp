// Ques: Print the following pattern
// Sample Input : n = 4
// Output :
//    1
//   2 2
//  3   3
// 4     4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = n-i; j > 0; j--){
            if(j == 1) cout << i+1;
            else cout << "  ";
        }
        for (int k = 0; k < 2*i; k++){
            if(k == 2*i-1) cout << i+1 ;
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}