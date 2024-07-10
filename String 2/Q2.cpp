// Ques: Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
// Input : str = "1241"
// Output : 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    string str;
    cout << "Enter the string : ";
    cin >> str;
    int n = stoi(str);
    int max = -1, second_max = -1;
    while (n > 0){
        int rem = n % 10;
        if (rem > max){
            second_max = max;
            max = rem;
        }
        else if (rem > second_max){
            second_max = rem;
        }
        n = n / 10;
    }
    if (second_max == -1){
        cout << "No second largest digit found" << endl;
    }
    else{
        cout << "Second largest digit is : " << second_max << endl;
    }

    return 0;
}