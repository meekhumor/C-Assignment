// Ques: You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target , return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.
// Example 1:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
// Example 2:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    // taking input from user make a 2d array
    int m, n, target;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    int matrix[m][n];
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    cout << "Enter the target number: ";
    cin >> target;

    int lo = 0, hi = m-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(matrix[mid][n-1] < target) lo = mid+1;
        else hi = mid-1;
    }

    int low = 0, high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(matrix[low][mid] < target) low = mid+1;
        else if(matrix[low][mid] > target) high = mid-1;
        else {
            cout << "true";
            return 0;
        }
    }
    cout << "false";

    return 0;
}