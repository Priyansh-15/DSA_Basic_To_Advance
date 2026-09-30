#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern12(int n) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<=i;j++) {
                cout<<j+1;
            }
            for(int j=0;j<2*(n-i)-2;j++) {
                cout<<" ";
            }
            for(int j=i;j>=0;j--) {
                cout<<j+1;
            }
            cout<<endl;
        }
    }
};