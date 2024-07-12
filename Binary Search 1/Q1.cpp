// Ques: Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
// does not exist return -1.
// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n, x, ans;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter target: ";
    cin >> x;

    int lo = 0, hi = n-1;
    bool flag = true;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] < x) lo = mid + 1;
        else if(arr[mid] > x) hi = mid - 1;
        else {
            if(arr[mid+1] == x) lo = mid +1;
            else {
                flag = true;
                ans = mid;
                break;
            }
        }
    }
    if(flag == true){
        cout << "Last occurrence of " << x << " in the array is " << ans; 
    }
    else{
        cout << x << " doesn't exist in an array";
    }
    return 0;
}