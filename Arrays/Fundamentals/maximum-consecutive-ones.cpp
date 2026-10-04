#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, cur = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == 1) {
                cur++;
                ans = max(ans, cur);
            } else {
                cur = 0;
            }
        }
        ans = max(ans, cur);
        return ans;
    }
};