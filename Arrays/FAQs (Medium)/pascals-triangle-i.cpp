#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pascalTriangleI(int r, int c) {
        //using direct formula (r-1) C (c-1)
        return ncr(r-1, c-1);
    }

    long long ncr(int n, int r) {
        long long  num = 1, den = 1;
        for(int i=0;i<r;i++) {
            num *= (n-i);
            num /= (i+1);
        }
        return num;
    }
};