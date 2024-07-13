// Ques: Given an array of integers, sort it in descending order using merge sort algorithm.

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &v){
    int i = a.size() - 1, j = b.size() - 1, k = v.size() - 1;
    while(i >= 0 && j >= 0){
        if(a[i] < b[j]) v[k--] = a[i--];
        else v[k--] = b[j--];
    }
    while(i >= 0) v[k--] = a[i--];
    while(j >= 0) v[k--] = b[j--];
}
void mergeSort(vector<int> &v){
    int n = v.size();
    if(n <= 1) return;
    int n1 = n/2, n2 = n - n1;
    vector<int> a(n1), b(n2);

    for (int i = 0; i < n1; i++){
        a[i] = v[i];
    }
    for (int i = 0; i < n2; i++){
        b[i] = v[n1+i];
    }
    mergeSort(a);
    mergeSort(b);

    merge(a,b,v);
}
int main()
{
    system("cls");
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elemenets of an array: ";
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    mergeSort(v);
    cout << "Sorted Array (Descending): ";
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    return 0;
}