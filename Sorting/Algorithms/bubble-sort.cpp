#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        for(int i=nums.size()-1;i>=1;i--) {
            bool flag = false;
            for(int j=0;j<=i-1;j++) {
                if(nums[j] > nums[j+1]) {
                    swap(nums[j], nums[j+1]);
                    flag = true;
                }
            }
            if(!flag)
                return nums;
        }
        return nums;
    }
};
