#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern18(int n) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<=i;j++) {
                char ch = 'A' + n - 1 + j - i;
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
};