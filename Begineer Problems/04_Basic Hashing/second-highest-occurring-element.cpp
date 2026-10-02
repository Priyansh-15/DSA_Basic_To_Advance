#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int secondMostFrequentElement(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        int maxele = -1, maxfreq = 0, secele = -1, secfreq = 0;
        for (auto x : m) {
            if (x.second > maxfreq) {
                secele = maxele;
                secfreq = maxfreq;
                maxele = x.first;
                maxfreq = x.second;
            } else if (x.second == maxfreq and x.first < maxele) {
                maxele = x.first;
            } else if (x.second != maxfreq and x.second > secfreq) {
                secele = x.first;
                secfreq = x.second;
            } else if (x.second == secfreq and x.first < secele) {
                secele = x.first;
            }
        }
        return secele;
    }
};