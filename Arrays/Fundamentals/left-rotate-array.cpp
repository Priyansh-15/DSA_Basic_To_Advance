#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int>temp;
        for(int i=0;i<k;i++) {
            temp.push_back(nums[i]);
        }
        for(int i=k;i<nums.size();i++) {
            nums[i-k] = nums[i];
        }
        for(int i=0;i<k;i++) {
            nums[nums.size()-k+i] = temp[i];
        }
    }
};