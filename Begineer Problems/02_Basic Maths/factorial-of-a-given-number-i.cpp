#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        int ans = 1;
        while(n>0) {
            ans *= n;
            n--;
        }
        return ans;
    }
};
