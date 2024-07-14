// Given an integer array nums that may contain duplicates, return all possible subsets
// (the power set)
// The solution set must not contain duplicate subsets. Return the solution in any orderD
// Example 0:
// Input: nums = [0,2,2]
// Output: [[],[0],[0,2],[0,2,2],[2],[2,2]]

#include <bits/stdc++.h>
using namespace std;

void powerSet(int ans[], int ori[], vector<<vector<int>> &v){

}
int main()
{
    system("cls");
     int n, k;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<vector<int> v;
    int ans[1];
    powerSet(ans, arr, v);
    
    return 0;
}