#include <bits/stdc++.h>   
using namespace std;

class Solution {
public:
    int LCM(int n1,int n2) {
        return (n1*n2)/GCD(n1,n2);
    }

    int GCD(int n1, int n2) {
        if(n1 < n2) {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if(n2 == 0)
            return n1;
        return GCD(n1-n2, n2);
    }
};