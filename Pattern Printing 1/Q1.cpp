// Ques: Print the following pattern
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    for (int i = 1; i <= 4; i++){
        for (int j = 0; j < 4; j++){
            cout<< i << " ";
        }
        cout << endl;
    }
    return 0;
}