// Ques: Leetcode[1109]

#include <bits/stdc++.h>
using namespace std;

vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
    vector<int>v(n,0);
    for(int i=0;i<bookings.size();i++){
        v[bookings[i][0] - 1] += bookings[i][2];
        if(bookings[i][1] < n)v[bookings[i][1]] -= bookings[i][2];
    }
    for(int i=1;i<n;i++){
        v[i] += v[i-1]; 
    }
    return v;
}

int main()
{
    system("cls");
    vector<vector<int>> bookings = {{1,2,10},{2,3,20},{2,5,25}};

    vector<int> v = corpFlightBookings(bookings, 5);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}