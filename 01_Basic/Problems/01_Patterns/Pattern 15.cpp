#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern15(int n) {
        char ch = 'A';
        for(int i=n;i>=1;i--) {
            for(int j=0;j<i;j++) {
                ch = 'A' + j;
                cout<<ch;
            }
            cout<<endl;
        }
    }
};