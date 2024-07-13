// Given an integer array nums of length n where all the integers of nums are in the range [1,n] and each integer appears once or twice, return an array of all the integers that appears twice.
// You must write an algorithm that runs in O(n) time and uses only constant extra space.
// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]
// Example 2:
// Input: nums = [1,1,2]
// Output: [1]
// Example 3:
// Input: nums = [1]
// Output: []

#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> v;
    int i = 0;
    while(i < nums.size()){
        if(nums[i] == i+1 || nums[i] == nums[nums[i]-1]) i++;
        else  swap(nums[i], nums[nums[i]-1]);
    }
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != i+1) v.push_back(nums[i]);
    
    }
    return v;
}

int main()
{
    system("cls");
    vector<int> nums = {4,3,2,7,8,2,3,1};
    
    vector<int> v = findDuplicates(nums);
    cout << "The duplicate numbers are: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}