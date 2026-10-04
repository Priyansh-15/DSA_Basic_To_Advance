#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxm = nums[0];
        for(int i=0;i<nums.size();i++) {
            maxm = max(maxm, nums[i]);
        }
        return maxm;
    }
};