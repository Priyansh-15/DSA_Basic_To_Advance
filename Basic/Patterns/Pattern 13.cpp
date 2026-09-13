#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern13(int n) {
        int val = 1;
        for(int i=0;i<n;i++) {
            for(int j=0;j<=i;j++) {
                cout<<val<<" ";
                val++;
            }
            cout<<endl;
        }
    }
};