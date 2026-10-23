#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        // vector<int>ans;
        // set<int>s;
        // for(int i=0;i<nums.size();i++) {
        //     if(s.count(nums[i]) != 0) {
        //         ans.push_back(nums[i]);
        //     }
        //     s.insert(nums[i]);
        // }
        // for(int i=1;i<= nums.size();i++) {
        //     if(s.count(i) == 0) {
        //         ans.push_back(i);
        //         return ans;
        //     }
        // }
        // TC : O(2*n). SC : O(n)

        // sort(nums.begin(), nums.end());
        // int a=-1, b = 1;
        // for(int i=0;i<nums.size();i++) {
        //     if(nums[i] == b)
        //         b++;
        //     if(a == -1 and i>0 and nums[i] == nums[i-1])
        //         a = nums[i];
        // }
        // return {a,b};
        // TC : O(nlogn)   SC : O(1)

        // maths formula
        // sum of arr - sum of n natural number = x-y
        // sum of sq of arr - sum of n2 natural number = x2 - y2 = (x+y)(x-y)
        // solve 2 eq to get x and y

        // long long  sum=0, sum2=0;
        // long long sumn= (nums.size() *(nums.size()+1)) / 2;
        // long long sumn2 = (sumn * (2*nums.size() + 1))/3;

        // for(int i=0;i<nums.size();i++) {
        //     sum += nums[i];
        //     sum2 += (pow(nums[i], 2));
        // }
        // // cout<<sum<<" "<<sum2<<" "<<sumn<<" "<<sumn2;
        // long long xsy = sum-sumn;
        // long long xay = (sum2-sumn2)/xsy;

        // long long x = (xsy + xay)/2;
        // long long y = xay-x;

        // return {x,y};

        int actxor = 0, expxor = 0;
        for (int i = 0; i < nums.size(); i++) {
            actxor = actxor ^ nums[i];
            expxor = expxor ^ (i + 1);
        }

        int res = actxor ^ expxor;
        int k = 1;
        while (!(res & k)) {
            k = k << 1;
        }
        int a = 0, b = 0;
        for (int i = 0; i < nums.size(); i++) {
            if ((nums[i] & k) == k) {
                a = a ^ nums[i];
            } else {
                b = b ^ nums[i];
            }
            if (((i+1) & k) == k) {
                a = a ^ (i+1);
            } else {
                b = b ^ (i+1);
            }
        }
        bool flag = false;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == a) flag = true;
        }
        return (flag == true) ? (vector<int>){a, b} : (vector<int>){b, a};
    }
};