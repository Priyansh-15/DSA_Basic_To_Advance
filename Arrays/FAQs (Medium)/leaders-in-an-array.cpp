#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> leaders(vector<int>& nums) {
        int maxm = nums[nums.size() - 1];
        vector<int>ans;
        ans.push_back(maxm);
        for (int i = nums.size() - 2; i >= 0; i--) {
            if(nums[i] > maxm) {
                ans.push_back(nums[i]);
            } 
            maxm = max(maxm, nums[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};