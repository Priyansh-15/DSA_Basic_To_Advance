#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool bsearch(int a, vector<int>& goodNumbers, int l, int r) {
        if(l==r)
            return goodNumbers[l] == a;
        if(l>r)
            return false;
        int m = (l+r)/2;
        if(goodNumbers[m] == a) {
            return true;
        } else if(goodNumbers[m] > a) {
            return bsearch(a, goodNumbers, l, m-1);
        } else {
            return bsearch(a, goodNumbers, m+1, r);
        }
    }
    
    int maxConsecutiveGoodNums(vector<int>& nums, vector<int>& goodNumbers) {
        // int ans=0, cur=0;
        // for(int i=0;i<nums.size();i++) {
        //     bool flag = false;
        //     for(int j=0;j<goodNumbers.size();j++) {
        //         if(nums[i] == goodNumbers[j]) {
        //             cur++;
        //             flag = true;
        //             break;
        //         }
        //     }
        //     if(!flag)
        //         cur = 0;
        //     ans = max(ans, cur);
        // }
        // return ans;
        // unordered_set<int>s;
        // int ans = 0, cur =0;
        // for(int i=0;i<goodNumbers.size();i++) {
        //     s.insert(goodNumbers[i]);
        // }
        // for(int i=0;i<nums.size();i++) {
        //     if(s.count(nums[i]) != 0) {
        //         cur++;
        //     } else {
        //         cur = 0;
        //     }
        //     ans = max(ans, cur);
        // }
        // return ans;
        sort(goodNumbers.begin(), goodNumbers.end());
        int ans = 0, cur = 0;
        for(int i=0;i<nums.size();i++) {
            if(bsearch(nums[i], goodNumbers, 0 , goodNumbers.size()-1)) {
                cur++;
            } else {
                cur = 0;
            }
            ans = max(ans, cur);
        }
        return ans;
    }
};