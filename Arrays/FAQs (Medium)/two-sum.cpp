#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++) {
        //     for(int j=i+1;j<nums.size();j++) {
        //         if(nums[i] + nums[j] == target)
        //             return {i, j};
        //     }
        // }
        // return {-1, -1};
        // sort(nums.begin(), nums.end());
        // int l=0, r= nums.size()-1;
        // while(l<r) {
        //     if(nums[l] + nums[r] == target)
        //         return {l,r};
        //     if(nums[l] + nums[r] <target) {
        //         l++;
        //     } else {
        //         r--;
        //     }
        // }
        // return {-1,-1};
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++) {
            if(m.find(target-nums[i]) != m.end()) {
                return {i, m[target-nums[i]]};
            }
            m[nums[i]] = i;
        }
        return {-1,-1};
    }
};