// Ques: Count the number of triplets whose sum is equal to the given value x.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n, x;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter x: ";
    cin >> x;
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                if (arr[i] + arr[j] + arr[k] == x){
                    count++;
                    break;
                }
            }
        }
    }
    cout << "Number of triplets: " << count << endl;

    return 0;
}