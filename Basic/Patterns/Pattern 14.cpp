#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern14(int n) {
        char ch = 'A';
        for(int i=0;i<n;i++) {
            for(int j=0;j<=i;j++) {
                ch = 'A'+j;
                cout<<ch;
            }
            cout<<endl;
        }
    }
};