#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern11(int n) {
        for(int i=0;i<n;i++) {
            int val = 1-i%2;
            for(int j=0;j<=i;j++) {
                cout<<val<<" ";
                val = 1-val;
            }
            cout<<endl;
        }
    }
};