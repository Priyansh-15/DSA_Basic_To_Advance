#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOddDigit(int n) {
        int count = 0;
        while(n>0) {
            if((n%10)%2) {
                count++;
            }
            n = n/10;
        }
        return count;
    }
};