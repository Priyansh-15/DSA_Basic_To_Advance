#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++) {
            int mini = i;
            for(int j=i+1;j<nums.size();j++) {
                if(nums[j]<nums[mini])
                    mini = j;
            }
            swap(nums[i], nums[mini]);
        }
        return nums;
    }
};
