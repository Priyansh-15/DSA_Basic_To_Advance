#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++) {
            m[nums[i]]++;
        }
        int maxm = 0, ele = -1;
        for(auto x:m) {
            if(x.second > maxm) {
                maxm = x.second;
                ele = x.first;
            } else if(x.second == maxm and ele > x.first) {
                ele = x.first;
            }
        }
        return ele;
    }
};