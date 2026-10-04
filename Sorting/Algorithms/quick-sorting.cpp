#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> quickSort(vector<int>& nums) {
        qs(nums, 0, nums.size()-1);
        return nums;
    }

    void qs(vector<int>& nums, int l, int h) {
        if(l<h) {
            int pivotind = fun(nums, l, h);
            qs(nums, l, pivotind-1);
            qs(nums, pivotind + 1, h);
        }
    }

    int fun(vector<int>& nums, int l, int h) {
        int pivot = nums[l];
        int i=l,j=h;
        while(i<j) {
            while(nums[i] <= pivot and i<h) {
                i++;
            }
            while(nums[j] > pivot and j>l) {
                j--;
            }
            if(i<j) {
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[l], nums[j]);
        return j;
    }
};
