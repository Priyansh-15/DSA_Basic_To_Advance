#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    bool checkPrime(int num) {
        // your code goes here
        if(num == 1)
            return false;
        if(num == 2)
            return true;
        return fun(2, num);
    }

    bool fun(int i, int num) {
        if(i>= sqrt(num)) {
            return num%i != 0;
        }
        return num%i != 0 && fun(i+1, num);
    }
};