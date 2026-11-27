#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> setDifference(vector<int>& nums1, vector<int>& nums2) {
        // vector<int>ans;

        // for(int i=0;i<nums1.size();i++) {
        //     bool flag = true;
        //     for(int j=0;j<nums2.size();j++) {
        //         if(nums1[i] == nums2[j]) {
        //             flag = false;
        //             break;
        //         }
        //     }
        //     if(flag) 
        //         ans.push_back(nums1[i]);
        // }
        // for(int i=0;i<nums2.size();i++) {
        //     bool flag = true;
        //     for(int j=0;j<nums1.size();j++) {
        //         if(nums2[i] == nums1[j]) {
        //             flag = false;
        //             break;
        //         }
        //     }
        //     if(flag) 
        //         ans.push_back(nums2[i]);
        // }
        // sort(ans.begin(), ans.end());
        // vector<int>sans;
        // for(int i=0;i<ans.size();i++) {
        //     if(i!=0 and ans[i-1] != ans[i])
        //         sans.push_back(ans[i]);
        //     if(i==0)
        //         sans.push_back(ans[i]);
        // }
        // return sans;

        int i=0,j=0;
        vector<int>ans;

        while(i<nums1.size() and j<nums2.size()) {
            if(nums1[i] == nums2[j]) {
                i++;
                while(i<nums1.size() and nums1[i] == nums1[i-1]) {
                    i++;
                }
                j++;
                while(j<nums2.size() and nums2[j] == nums2[j-1]) {
                    j++;
                }
            } else if(nums1[i] > nums2[j]) {
                ans.push_back(nums2[j]);
                j++;
                while(j<nums2.size() and nums2[j] == nums2[j-1]) {
                    j++;
                }
            } else {
                ans.push_back(nums1[i]);
                i++;
                while(i<nums1.size() and nums1[i] == nums1[i-1]) {
                    i++;
                }
            }
        }
        while(i<nums1.size()) {
            if(i==0 or (i>0 and nums1[i-1] != nums1[i]))
                ans.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()) {
            if(j==0 or (j>0 and nums2[j-1] != nums2[j]))
                ans.push_back(nums2[j]);
            j++;
        }
        return ans;
    }
};