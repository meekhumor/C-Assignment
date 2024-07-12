// Ques: Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes
// Input 2: n = 45
// Output 2: no

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool flag = false;
    int lo = 0, hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(mid*mid > n) hi = mid-1;
        else if(mid*mid < n) lo = mid+1;
        else {
            flag = true;
            break;
        }
    }
    if(flag == true) cout << "Yes, it is a perfect square";
    else cout << "No, it is not a perfect square";
    return 0;
}