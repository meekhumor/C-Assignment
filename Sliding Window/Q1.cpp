// Ques: Leetcode 1343

#include <bits/stdc++.h>
using namespace std;

int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    int n = arr.size();
    int sum = 0, count = 0;
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }
    if(sum/k >= threshold) count++;
    for(int i = k; i < n; i++){
        sum = sum+arr[i]-arr[i-k];
        if(sum/k >= threshold) count++;
    }
    return  count;
}
int main()
{
    system("cls");
    int n, k, threshold;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the size of window: ";
    cin >> k;
    cout << "Enter the threshold: ";
    cin >> threshold;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Number of subarrays with sum greater than or equal to " << threshold << " is: " << numOfSubarrays(arr, k, threshold);
    return 0;
}