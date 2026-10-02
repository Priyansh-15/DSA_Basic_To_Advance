#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++) {
            m[nums[i]]++;
        }
        int maxfreq = INT_MIN, minfreq = INT_MAX;
        for(auto x:m) {
            maxfreq = max(maxfreq, x.second);
            minfreq = min(minfreq, x.second);
        }
        return maxfreq + minfreq;
    }
};
