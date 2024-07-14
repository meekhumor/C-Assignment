// Ques: Leetcode [1248]

#include <bits/stdc++.h>
using namespace std;

int numberOfSubarrays(vector<int>& nums, int k) {
    int rcount = 0;
    for(int i = k; i <= nums.size(); i++){
        int count = 0;
        for(int j = 0; j < i; j++){
            if(nums[j]%2 != 0) count++; 
        }
        if(count == k) rcount++;
        for(int j = i; j < nums.size(); j++){
            if(nums[j]%2 != 0 && nums[j-i]%2 == 0) count++;
            if(nums[j]%2 == 0 && nums[j-i]%2 != 0) count--;
            if(count == k) rcount++;
        }
    }
    return rcount;
}

int main()
{
    system("cls");
    vector<int> nums = {1,1,2,1,1};
    int k = 3;
    cout << numberOfSubarrays(nums, k) << endl;
    return 0;
}