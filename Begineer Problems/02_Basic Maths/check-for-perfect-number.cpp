#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    bool isPerfect(int n) {
        if (n == 1) return false;
        int x = 1;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                x += i;
                if (i != sqrt(n)) x += n / i;
            }
        }
        return x == n;
    }
};