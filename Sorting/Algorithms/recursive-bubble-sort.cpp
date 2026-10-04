#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        fun(nums,nums.size()-1);
        return nums;
    }

    void fun(vector<int>& nums, int n) {
        if(n==0) {
            return;
        }
        for(int i=1;i<=n;i++) {
            if(nums[i-1] > nums[i])
                swap(nums[i-1], nums[i]);
        }
        return fun(nums, n-1);
    }
};
