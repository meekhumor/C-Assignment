// Ques: Print an increasing-decreasing sequence using recursion
// Example:
// If n = 5, the output should be:
// 1 2 3 4 5 4 3 2 1

#include <bits/stdc++.h>
using namespace std;

void incDec(int n, int k){
    if (k == n+1) return;
    cout << k << " ";
    incDec(n, k+1);
    if(k != 1) cout << k-1 << " ";

}
int main()
{
    system("cls");
    int n;
    cout << "Enter a integer n: ";
    cin >> n;

    incDec(n, 1);
    return 0;
}