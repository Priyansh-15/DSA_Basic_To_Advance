#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        // int cz = 0, co = 0, ct = 0;
        // for(int i=0;i<nums.size();i++) {
        //     if(nums[i] == 0) {
        //         cz++;
        //     } else if(nums[i] == 1) {
        //         co++;
        //     } else {
        //         ct++;
        //     }
        // }
        // int ind = 0;
        // while(cz) {
        //     nums[ind] = 0;
        //     ind++;
        //     cz--;
        // }
        // while(co) {
        //     nums[ind] = 1;
        //     ind++;
        //     co--;
        // }
        // while(ct) {
        //     nums[ind] = 2;
        //     ind++;
        //     ct--;
        // }
        int l=-1, h= nums.size(), m = 0;
        while(m<h) {
            if(nums[m] == 0) {
                l++;
                swap(nums[m], nums[l]);
                m++;
            } else if(nums[m] == 2) {
                h--;
                swap(nums[m], nums[h]);
            } else {
                m++;
            }
        }
    }
};