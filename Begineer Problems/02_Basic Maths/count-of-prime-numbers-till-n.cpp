#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int primeUptoN(int n) {
        int count = 0;
        for(int i=1;i<=n;i++) {
            if(isprime(i))
                count++;
        }
        return count;
    }

    int isprime(int n) {
        if(n==1)
            return false;
        for(int i=2;i<=sqrt(n);i++) {
            if(n%i==0)
                return false;
        }
        return true;
    }
};