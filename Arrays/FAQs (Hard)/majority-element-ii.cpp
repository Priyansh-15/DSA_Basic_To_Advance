#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        // unordered_map<int,int>m;
        // for(int i=0;i<nums.size();i++) {
        //     m[nums[i]]++;
        // }  
        // vector<int>ans;
        // for(auto x: m) {
        //     if(x.second > nums.size()/3) {
        //         ans.push_back(x.first);
        //     }
        // } 
        // return ans;
        int ele1 = INT_MIN, ele2 = INT_MIN, cnt1 = 0, cnt2 = 0;
        for(int i=0;i<nums.size();i++) {
            if(cnt1 == 0 and ele2 != nums[i]) {
                ele1 = nums[i];
                cnt1 = 1;
            } else if(cnt2 == 0 and ele1 != nums[i]) {
                ele2 = nums[i];
                cnt2 = 1;
            } else if(ele1 == nums[i]) {
                cnt1++;
            } else if(ele2 == nums[i]) {
                cnt2++;
            } else {
                cnt1--;
                cnt2--;
            }
        }
        vector<int>ans;
        cnt1 = 0, cnt2 = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == ele1) {
                cnt1++;
                if(cnt1 == 1 + (nums.size()/3)) {
                    ans.push_back(ele1);
                }
            } else if( nums[i] == ele2) {
                cnt2++;
                if(cnt2 == 1 + (nums.size()/3)) {
                    ans.push_back(ele2);
                }
            }
        }
        return ans;
    }
};