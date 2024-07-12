// Ques: Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
// maximum number of 1’s.
// Input matrix : 0 1 1 1
// 0 0 1 1
// 1 1 1 1 // this row has maximum 1s
// 0 0 0 0
// Output: 2

#include <bits/stdc++.h>
using namespace std;

int count(vector<int> &v){
    int n = v.size();
    int lo = 0, hi = n-1;
    while (lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid] == 0) lo = mid + 1;
        else hi = mid - 1;
    }
    return n-hi-1;
}
int main()
{
    system("cls");
    // Take a 2d vector as input from user
    vector<vector<int>> v;
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < n; i++){
        vector<int> temp;
        for (int j = 0; j < m; j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    int max = 0;
    int ans = 0;
    for (int i = 0; i < n; i++){
        int c = count(v[i]);
        if (c >= max){
            max = c;
            ans = i;
        }
    }
    cout << "The row with maximum 1s is: " << ans << endl;
    return 0;
}