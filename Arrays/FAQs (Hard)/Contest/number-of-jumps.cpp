#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int NumberOfJumps(vector<int>& nums, int k) {
        // int ans = 0;
        // for(int i=0;i<nums.size();i++) {
        //     for(int j=i+1;j<nums.size();j++) {
        //         if(nums[j] > nums[i] + k)
        //             ans++;
        //     }
        // }
        // return ans;
        
        multiset<int>s;
        int ans=0;
        for(int i=nums.size()-1;i>=0;i--) {
            ans += distance(s.upper_bound(nums[i]+k), s.end());
            s.insert(nums[i]);
        }
        return ans;
    }
};
