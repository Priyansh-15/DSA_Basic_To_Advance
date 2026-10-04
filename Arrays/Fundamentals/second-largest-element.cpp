#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int maxm = nums[0], maxm2 = INT_MIN;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] > maxm) {
                maxm2 = maxm;
                maxm = nums[i];
            } else if(nums[i] < maxm and nums[i] > maxm2) {
                maxm2 = nums[i];
            }
        }
        if(maxm2 == INT_MIN)
            maxm2 = -1;
        return maxm2;
    }
};