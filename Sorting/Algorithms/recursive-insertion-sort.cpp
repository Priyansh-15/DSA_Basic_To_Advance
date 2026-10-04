#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        fun(nums, 0);
        return nums;
    }

    void fun(vector<int>& nums, int i) {
        if(i==nums.size())
            return;
        int j=i;
        while(j>0 and nums[j] < nums[j-1]) {
            swap(nums[j], nums[j-1]);
            j--;
        }
        fun(nums, i+1);
    }

};
