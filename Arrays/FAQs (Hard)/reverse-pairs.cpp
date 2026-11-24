#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int reversePairs(vector<int>& nums) {
        // int ans=0;
        // for(int i=0;i<nums.size();i++) {
        //     for(int j=i+1;j<nums.size();j++) {
        //         long long int x,y;
        //         x = nums[i];
        //         y = nums[j];
        //         y*=2;
        //         if(x > y)
        //             ans++;
        //     }
        // }
        // return ans;
        return mergeSort(0, nums.size() - 1, nums);
    }

    int mergeSort(int l, int h, vector<int>& nums) {
        int count = 0;
        if (l < h) {
            int m = (l + h) / 2;
            count += mergeSort(l, m, nums);
            count += mergeSort(m + 1, h, nums);
            count += countReversePair(l, m, h, nums);
            combine(l, m, h, nums);
        }
        return count;
    }

    int countReversePair(int l, int m, int h, vector<int>& nums) {
        int ans = 0, j = m + 1;
        for (int i = l; i <= m; i++) {
            long long int x = nums[i];
            long long int y = 2;
            while ((j <= h) and (x > (y*nums[j]))) {
                j++;
            }
            ans += j - (m + 1);
        }
        return ans;
    }

    void combine(int l, int m, int h, vector<int>& nums) {
        vector<int> temp;
        int i = l, j = m + 1;
        while (i <= m and j <= h) {
            if (nums[i] < nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }
        while (i <= m) {
            temp.push_back(nums[i]);
            i++;
        }
        while (j <= h) {
            temp.push_back(nums[j]);
            j++;
        }
        for (int p = 0; p < temp.size(); p++) {
            nums[l + p] = temp[p];
        }
    }
};