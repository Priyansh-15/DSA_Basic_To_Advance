#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int>pos;
        // vector<int>neg;
        // for(int i=0;i<nums.size();i++) {
        //     if(nums[i]>0)
        //         pos.push_back(nums[i]);
        //     else
        //         neg.push_back(nums[i]);
        // }
        // vector<int>ans;
        // for(int i=0;i<pos.size();i++) {
        //     ans.push_back(pos[i]);
        //     ans.push_back(neg[i]);
        // }
        // return ans;
        vector<int>ans;
        int p=0, n=0;
        while(p<nums.size() and n<nums.size()) {
            while(p<nums.size() and nums[p]<0) {
                p++;
            }
            while(n<nums.size() and nums[n]>0) {
                n++;
            }
            if(p<nums.size())   
                ans.push_back(nums[p]);
            if(n<nums.size())
                ans.push_back(nums[n]);
            p++;
            n++;
        }
        return ans;
    }
};