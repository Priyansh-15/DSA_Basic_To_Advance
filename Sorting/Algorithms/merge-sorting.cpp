#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> mergeSort(vector<int>& nums) {
        divide(nums, 0, nums.size()-1);
        return nums;
    }

    void divide(vector<int>& nums, int l, int h) {
        if(l>=h)
            return;
        divide(nums, l, (l+h)/2);
        divide(nums, ((l+h)/2)+1, h);
        merge(nums, l, h);
    }

    void merge(vector<int>& nums, int l, int h) {
        int m = (l+h)/2;
        int i=l,j=m+1;
        vector<int>ans;
        while(i<=m and j<=h) {
            if(nums[i] <= nums[j]) {
                ans.push_back(nums[i]);
                i++;
            } else {
                ans.push_back(nums[j]);
                j++;
            }
        }
        while(i<=m) {
            ans.push_back(nums[i]);
            i++;
        }
        while(j<=h) {
            ans.push_back(nums[j]);
            j++;
        }
        for(int x=l;x<=h;x++) {
            nums[x] = ans[x-l];
        }
    }
};
