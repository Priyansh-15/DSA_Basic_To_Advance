#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   long long int numberOfInversions(vector<int> nums) {
        // long long int ans = 0;
        // for(int i=0;i<nums.size();i++) {
        //     for(int j=i+1;j<nums.size();j++) {
        //         if(nums[i] > nums[j])
        //             ans++;
        //     }
        // }
        // return ans;
        return mergeSort(0, nums.size()-1, nums);
    }

    long long int mergeSort(int l, int h, vector<int>&nums) {
        if(l<h) {
            long long int p=0;
            int m = (l+h)/2;
            p+= mergeSort(l,m,nums);
            p+= mergeSort(m+1,h,nums);
            p+= merge(l,m,h,nums);
            return p;
        }
        return 0;
    }

    long long int merge(int l, int m, int h, vector<int>&nums){
        int i=l,j=m+1;
        long long int p=0;
        vector<int>ans;
        while(i<j and i<=m and j<=h) {
            if(nums[i] <= nums[j]) {
                ans.push_back(nums[i]);
                i++;
            } else {
                p+= m-i+1;
                ans.push_back(nums[j]);
                j++;
            }
        }
        while(i<=m) {
            ans.push_back(nums[i]);
            i++;
        }
        while(j<=h) {
            ans.push_back(nums[j]);
            j++;
        }
        for(int x=l;x<=h;x++) {
            nums[x] = ans[x-l];
        }
        return p;
    }
    
};