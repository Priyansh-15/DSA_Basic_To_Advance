#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int ans = INT_MIN;
        // for(int i=0;i<nums.size();i++) {
        //     int mul = 1;
        //     for(int j=i;j<nums.size();j++) {
        //         mul *= nums[j];
        //         ans = max(ans, mul);
        //     }
        // }
        // return ans;

        vector<int>temp;
        int ans = INT_MIN;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == 0) {
                ans = max(ans,0);
                if(temp.size() != 0)
                    ans = max(ans, fun(temp));
                temp = {};
            } else {
                temp.push_back(nums[i]);
            }
        }
        if(temp.size() != 0) {
            ans = max(ans, fun(temp));
        }
        return ans;
    }

    int fun(vector<int>&nums) {
        // all positive -> mul of all 
        // even negative -> mul of all 
        // odd negative -> remove one negative and see what is maxm of else part 

        if(nums.size() == 0)
            return INT_MIN;
        if(nums.size() == 1)
            return nums[0];
            
        bool neg = false;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]<0) {
                neg ^= true;
            }
        }
        vector<int>pre(nums.size());
        vector<int>suf(nums.size());
        for(int i=0;i<nums.size();i++) {
            if(i==0) {
                pre[i] = nums[i];
                suf[nums.size()-1-i] = nums[nums.size()-1-i];
            }
            else {
                pre[i] = nums[i] * pre[i-1];    
                suf[nums.size()-1-i] = nums[nums.size()-1-i] * suf[(nums.size()-1-i)+1];
            }
        }
        if(!neg) {
            return suf[0];
        }
        int ans = INT_MIN;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] < 0) {
                int a = INT_MIN, b = INT_MIN;
                if(i!=0)
                    a = pre[i-1];
                if(i!=nums.size()-1)
                    b = suf[i+1];
                ans = max(ans, max(a,b));
            }
        }
        return ans;
    }
};