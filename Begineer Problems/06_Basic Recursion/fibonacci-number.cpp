#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        //your code goes here
        if(n <= 1)
            return n;
        return fib(n-1) + fib(n-2);
    }
};