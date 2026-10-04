#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0, ind = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] != 0) {
                swap(nums[ind], nums[i]);
                ind++;
            } else {
                count++;
            }
        }
        for(int i=0;i<count;i++) {
            nums[nums.size()-count+i] = 0;
        }
    }
};