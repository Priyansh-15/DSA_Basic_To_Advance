#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int maxm = INT_MIN;
        // for(int i=0;i<nums.size();i++) {
        //     int cur = 0;
        //     for(int j=i;j<nums.size();j++) {
        //         cur += nums[j];
        //         maxm = max(maxm, cur);
        //     }
        // }
        // return maxm;
        int maxm = INT_MIN;
        int sum = 0;
        for(int i=0;i<nums.size();i++) {
            sum += nums[i];
            maxm = max(maxm, sum);
            if(sum<0)
                sum = 0;
        }
        return maxm;
    }
};