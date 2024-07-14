// Ques: Leetcode 2640

#include <bits/stdc++.h>
using namespace std;

vector<long long> findPrefixScore(vector<int>& nums) {
    vector<long long> v;
    int maxNum = nums[0];
    v.push_back(2*nums[0]);
    for(int i = 1; i < nums.size(); i++){
        maxNum = max(maxNum, nums[i]);
        v.push_back(nums[i] + maxNum + v[i-1]);
    }
    return v;
}
int main()
{
    system("cls");
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<long long> v = findPrefixScore(nums);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    return 0;
}