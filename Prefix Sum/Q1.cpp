// Ques: Leetcode[303]

#include <bits/stdc++.h>
using namespace std;
class NumArray {
public:
    vector<int>pre;
    NumArray(vector<int>& nums) {
        pre = vector<int>(nums.size());
        pre[0] = nums[0];
        for(int i = 1; i < nums.size(); i++) pre[i] = pre[i-1] + nums[i];
    }
    int sumRange(int left, int right) {
        if(left == 0) return pre[right];
        return pre[right] - pre[left - 1];
    }
};
int main()
{
    system("cls");
    vector<int> nums = {-2,0,3,-5,2,-1};

    NumArray numArray(nums);
    cout << numArray.sumRange(0,2) << endl;
    return 0;
}