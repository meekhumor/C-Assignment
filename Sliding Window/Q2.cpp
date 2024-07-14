// Ques: Leetcode [2302]

#include <bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int>& nums, long long k) {
        int rcount = 0;
        for(int i = 1; i <= nums.size(); i++){
            long long sum = 0;
            int count = 0;
            for(int j = 0; j < i; j++){
                sum += nums[j];
            }
            if(sum*i < k) count++;
            for(int j = i; j < nums.size(); j++){
                sum = sum + nums[j] - nums[j-i];
                if(sum*i < k) count++;
            }
            if(count == 0) break;
            else rcount += count;
        }
        return rcount;
    }
int main()
{
    system("cls");
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    long long k;
    cout << "Enter k: ";
    cin >> k;

    cout << countSubarrays(nums, k) << endl;
    return 0;
}