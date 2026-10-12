#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // set<vector<int>>s;
        // for(int i=0;i<nums.size();i++) {
        //     for(int j=i+1;j<nums.size();j++) {
        //         for(int k=j+1;k<nums.size();k++) {
        //             if(nums[i] + nums[j] + nums[k] == 0) {
        //                 vector<int>temp = {nums[i], nums[j], nums[k]};
        //                 sort(temp.begin(), temp.end());
        //                 s.insert(temp);
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>>ans(s.begin(), s.end());
        // return ans;
        // set<vector<int>>s;
        // for(int i=0;i<nums.size();i++) {
        //     unordered_map<int, int>m;
        //     for(int j=i+1;j<nums.size();j++) {
        //         if(m[-1*(nums[i] + nums[j])] != 0) {
        //             vector<int>temp = {nums[i], nums[j], -1*(nums[i] + nums[j])};
        //             sort(temp.begin(), temp.end());
        //             s.insert(temp);
        //         }
        //         m[nums[j]]++;
        //     }
        // }
        // vector<vector<int>>ans(s.begin(), s.end());
        // return ans;
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++) {
            int j=i+1, k = nums.size()-1;
            if(i>0 and nums[i] == nums[i-1])
                continue;
            while(j<k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum > 0) {
                    k--;
                    while(j<k and nums[k] == nums[k+1])
                        k--;
                } else if (sum < 0) {
                    j++;
                    while(j<k and nums[j] == nums[j-1])
                        j++;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j<k and nums[j] == nums[j-1])
                        j++;
                    while(j<k and nums[k] == nums[k+1])
                        k--;
                }
            }
        }
        return ans;
    }
};