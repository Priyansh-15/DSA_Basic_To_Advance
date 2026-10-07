#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int>m;
        // for(int i=0;i<nums.size();i++)
        //     m[nums[i]]++;
        // for(auto x:m) {
        //     if(x.second > nums.size()/2) {
        //         return x.first;
        //     }
        // }
        int ele = nums[0], freq = 1;
        for(int i=1;i<nums.size();i++) {
            if(nums[i] == ele) {
                freq++;
            } else {
                freq--;
            }
            if(freq == 0) {
                ele = nums[i];
                freq = 1;
            }
        }
        return ele;
    }
};