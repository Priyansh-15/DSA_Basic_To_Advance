#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> pascalTriangleIII(int n) {
        vector<vector<int>>ans;
        for(int i=1;i<=n;i++) {
            vector<int>cur;
            int t=1;
            cur.push_back(t);
            for(int j=1;j<i;j++) {
                t *= (i-j);
                t /= j;
                cur.push_back(t);
            }
            ans.push_back(cur);
        }
        return ans;
    }
};