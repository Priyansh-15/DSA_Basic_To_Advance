#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int l=0, r=0;
        while(l<nums1.size() and r<nums2.size()) {
            int val;
            if(nums1[l] <= nums2[r]) {
                val = nums1[l];
                l++;
            } else {
                val = nums2[r];
                r++;
            }
            while( l <nums1.size() and nums1[l] == val) {
                l++;
            }
            while(r<nums2.size() and nums2[r] == val) {
                r++;
            }
            ans.push_back(val);
        }
        while(l<nums1.size()) {
            int val = nums1[l];
            while(l<nums1.size() and nums1[l] == val) {
                l++;
            }
            ans.push_back(val);
        }
        while(r<nums2.size()) {
            int val = nums2[r];
            while(r<nums2.size() and nums2[r] == val) {
                r++;
            }
            ans.push_back(val);
        }
        return ans;
    }
};