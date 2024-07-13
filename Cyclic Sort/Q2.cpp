// Ques: You have a set of integers s , which originally contains all the numbers from 1 to n . Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number. You are given an integer array nums representing the data status of this set after the error. Find the number that occurs twice and the number that is missing and return them in the form of an array. [Leetcode 645]
// Example 1:
// Input: nums = [1,2,2,4]
// Output: [2,3]
// Example 2:
// Input: nums = [1,1]
// Output: [1,2]

#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    vector<int> v;
    int i = 0;
    while(i < nums.size()){
        if(nums[i] == i+1 || nums[i] == nums[nums[i]-1]) i++;
        else  swap(nums[i], nums[nums[i]-1]);
    }
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != i+1){
            v.push_back(nums[i]);
            v.push_back(i+1);
        }
    }
    return v;
}

int main()
{
    system("cls");
    vector<int> nums = {1,2,2,4};
    
    vector<int> v = findErrorNums(nums);
    cout << "Error Number: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}