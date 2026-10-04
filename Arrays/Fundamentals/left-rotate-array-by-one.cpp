#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        for(int i=1;i<nums.size();i++) {
            swap(nums[i-1], nums[i]);
        }
    }
};