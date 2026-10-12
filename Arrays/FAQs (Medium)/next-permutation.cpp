#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // Your code goes here
        // vector<vector<int>>totalPerm;
        // fun(0, nums, totalPerm);
        // sort(totalPerm.begin(), totalPerm.end());

        // for(int i=0;i<totalPerm.size();i++) {
        //     if(totalPerm[i] == nums) {
        //         nums = (i==totalPerm.size()-1) ? totalPerm[0] : totalPerm[i+1];
        //         return; 
        //     }
        // }
        int ind = -1;
        for(int i=nums.size()-2;i>=0;i--) {
            if(nums[i] < nums[i+1]) {
                ind = i;
                break;
            }
        }
        if(ind == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i=nums.size()-1;i>=ind;i--) {
            if(nums[i] > nums[ind]) {
                swap(nums[ind], nums[i]);
                break;
            }
        }
        reverse(nums.begin() + ind + 1, nums.end());
    }

    // void fun(int ind, vector<int>&nums, vector<vector<int>>&totalPerm) {
    //     if(ind == nums.size()) {
    //         totalPerm.push_back(nums);
    //         return;
    //     }
    //     for(int i=ind; i<nums.size();i++) {
    //         swap(nums[ind], nums[i]);
    //         fun(ind+1, nums, totalPerm);
    //         swap(nums[ind], nums[i]);
    //     }
    // }
};