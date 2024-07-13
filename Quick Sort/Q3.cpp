// Given an array where all its elements are sorted in increasing order except two swapped
// elements, sort it in linear time. Assume there are no duplicates in the array.
// Input: A[] = [3, 8, 6, 7, 5, 9, 10]
// Output: A[] = [3, 5, 6, 7, 8, 9, 10]

#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int si, int ei){
    int pvtele = arr[(si+ei)/2];
    int count = 0;
    for (int i = si; i <= ei; i++)
    {
        if(i == (si+ei)/2) continue;
        if(arr[i] <= pvtele) count++; 
    }
    int pi = count + si;
    swap(arr[(si+ei)/2], arr[pi]);

    int i = si;
    int j = ei;
    while(i<pi && j>pi)
    {
        if(arr[i] <= pvtele) i++;
        if(arr[j] > pvtele) j--;
        else if(arr[i] > pvtele && arr[j] <= pvtele)
            swap(arr[i++], arr[j--]);
    }
    return pi;

}
void quickSort(int arr[], int si, int ei){
    if(si>=ei) return;
    int pi = partition(arr,si,ei);

    quickSort(arr, si, pi-1);
    quickSort(arr, pi+1, ei);
}
int main()
{
    system("cls");
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    quickSort(arr, 0, n-1);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}