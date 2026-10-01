#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        if(n == 0)
            return true;
        int digit = log10(n) + 1;
        int x = n;
        int ans = 0;
        int p = digit;
        while(digit--) {
            if(ans > x)
                return false;
            ans += pow(n%10, p);
            n /= 10;
        }
        return x == ans;
    }
};