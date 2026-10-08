#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pascalTriangleII(int r) {
        vector<int>ans;
        int cur = 1;
        ans.push_back(cur);
        for(int i=1;i<r;i++) {
            cur *= (r-i);
            cur /= i;
            ans.push_back(cur);
        }
        return ans;
    }
};