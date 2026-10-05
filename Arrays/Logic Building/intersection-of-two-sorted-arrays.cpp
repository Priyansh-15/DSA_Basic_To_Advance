#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        // vector<int>ans;
        // map<int,int>m;
        // for(int i=0;i<nums1.size();i++) {
        //     m[nums1[i]]++;
        // }
        // for(int i=0;i<nums2.size();i++) {
        //     if(m[nums2[i]] != 0) {
        //         ans.push_back(nums2[i]);
        //         m[nums2[i]]--;
        //     }
        // }
        // return ans;
        int i=0, j=0;
        vector<int>ans;
        while(i<nums1.size() and j<nums2.size()) {
            while(i<nums1.size() and nums1[i]<nums2[j]) {
                i++;
            }
            while(j<nums2.size() and nums1[i] > nums2[j]) {
                j++;
            }
            if(i<nums1.size() and j<nums2.size() and nums1[i] == nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};