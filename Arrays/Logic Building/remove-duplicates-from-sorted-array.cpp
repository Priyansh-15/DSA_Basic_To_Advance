#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1, ind = 0;
        for(int i=1;i<nums.size();i++) {
            if(nums[i] == nums[ind]) {
                //nothing
            } else {
                swap(nums[i],nums[ind+1]);
                ind++;
                count++;
            }
        }
        return count;
    }
};