#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestDigit(int n) {
        int ans = 0;
        while(n>0) {
            ans = max(ans, n%10);
            n/= 10;
        }
        return ans;
    }
};