#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // for(int i=0;i<n;i++) {
        //     nums1[i+m] = nums2[i];
        // }
        // sort(nums1.begin(), nums1.end());

        //Shell sort algo
        // for(int i=0;i<n;i++) {
        //     nums1[i+m] = nums2[i];
        // }
        // int gap = ((m + n)/2) + ((m + n)%2);
        // while(gap>0) {
        //     int i=0,j=i+gap;
        //     while(j<m+n) {
        //         if(nums1[i] > nums1[j]) 
        //             swap(nums1[i], nums1[j]);
        //         i++;
        //         j++;
        //     }

        //     int ngap = (gap/2) + (gap%2);
        //     if(ngap == gap)
        //         break;
        //     gap = ngap;
        // }

        //2 pointer approach
        int i=m-1, j=n-1;
        for(int k=m+n-1;k>=0;k--) {
            if(i>=0 and j>=0) {
                if(nums1[i] > nums2[j]) {
                    nums1[k] = nums1[i];
                    i--;
                } else {
                    nums1[k] = nums2[j];
                    j--;
                }
            } else if(i>=0) {
                nums1[k] = nums1[i];    
                i--;    
            } else {
                nums1[k] = nums2[j];
                j--;
            }
        }
    }
};