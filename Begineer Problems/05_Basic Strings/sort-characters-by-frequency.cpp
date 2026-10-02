#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    static bool cmp(pair<char, int>& a, pair<char, int>& b) {
        if (a.second > b.second)
            return true;
        else if (a.second == b.second)
            return a.first < b.first;
        else
            return false;
    }

    vector<char> frequencySort(string& s) {
        // your code goes here
        unordered_map<char, int> m;
        for (int i = 0; i < s.length(); i++) {
            m[s[i]]++;
        }
        vector<pair<char, int>> v;
        for (auto x : m) {
            v.push_back(x);
        }
        sort(v.begin(), v.end(), cmp);
        vector<char> ans;
        for (auto x : v) {
            ans.push_back(x.first);
        }
        return ans;
    }
};