// Ques: Leetcode[724]

#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
    for(int i = 1; i < nums.size(); i++){
        nums[i] += nums[i-1];
    }
    if(nums[nums.size()-1]-nums[0] == 0) return 0;
    for(int i = 1; i < nums.size(); i++){
        int rsum = nums[nums.size()-1] - nums[i];
        int lsum = nums[i-1];
        if(rsum == lsum){
            return i;
        }
    }
    return -1;
}
int main()
{
    system("cls");
    vector<int> nums = {1,7,3,6,5,6};
    cout<<pivotIndex(nums)<<endl;
    return 0;
}