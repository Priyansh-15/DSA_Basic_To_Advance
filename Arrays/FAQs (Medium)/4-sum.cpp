#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // set<vector<int>>s;
        // for(int i=0;i<nums.size();i++) {
        //     for(int j=i+1;j<nums.size();j++) {
        //         for(int k=j+1;k<nums.size();k++) {
        //             for(int l = k+1;l<nums.size();l++) {
        //                 if(nums[i] + nums[j] + nums[k] + nums[l] == target) {
        //                     vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
        //                     sort(temp.begin(), temp.end());
        //                     s.insert(temp);
        //                 }
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>>ans(s.begin(), s.end());
        // return ans;
        // set<vector<int>>s;
        // for(int i=0;i<nums.size();i++) {
        //     for(int j=i+1;j<nums.size();j++) {
        //         unordered_map<int,int>m;
        //         for(int k=j+1;k<nums.size();k++) {
        //             if(m.find(target-(nums[i] + nums[j] + nums[k])) != m.end()) {
        //                 vector<int>temp = {nums[i], nums[j], nums[k], target-(nums[i] + nums[j] + nums[k])};
        //                 sort(temp.begin(), temp.end());
        //                 s.insert(temp);
        //             }
        //             m[nums[k]]++;
        //         }
        //     }
        // }
        // vector<vector<int>>ans(s.begin(), s.end());
        // return ans;
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++) {
            if(i>0 and nums[i] == nums[i-1])
                continue;
            for(int j=i+1;j<nums.size();j++) {
                if(j>i+1 and nums[j] == nums[j-1])
                    continue;
                int l=j+1, r= nums.size()-1;
                while(l<r) {
                    int sum = nums[i] + nums[j] + nums[l] + nums[r];
                    if(sum < target) {
                        l++;
                        while(l<r and nums[l] == nums[l-1])
                            l++;
                    } else if(sum > target) {
                        r--;
                        while(l<r and nums[r] == nums[r+1])
                            r--;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                        while(l<r and nums[l] == nums[l-1])
                            l++;
                        while(l<r and nums[r] == nums[r+1])
                            r--;
                    }
                }
            }
        }
        return ans;
    }
};