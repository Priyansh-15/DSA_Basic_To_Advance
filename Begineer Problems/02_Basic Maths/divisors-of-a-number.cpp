#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
         vector<int>ans;
         for(int i=1;i<=sqrt(n);i++) {
            if(n%i ==0) {
                ans.push_back(i);
                if(i != sqrt(n)) {
                    ans.push_back(n/i);
                }
            }
         }
         sort(ans.begin(), ans.end());
         return ans;
    }
};