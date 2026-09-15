#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern22(int n) {
        for(int i=0;i<2*n-1;i++) {
            for(int j=0;j<2*n-1;j++) {
                cout<<n-min(i, min(j,min(2*n-2-i,2*n-2-j)))<<" ";
            }
            cout<<endl;
        }
    }
};