// Ques: Print all numbers from 1 to 100 that are divisible by 3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    for (int i = 1; i <= 100; i++){
        if(i % 3 == 0) cout<<i<<" ";
    }
    return 0;
}