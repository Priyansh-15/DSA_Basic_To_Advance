#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
        int x = 0, y=n;
        while(n>0) {
            x = 10*x + n%10;
            n = n/10;
        }
        return x == y;
    }
};