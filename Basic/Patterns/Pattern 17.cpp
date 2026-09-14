#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern17(int n) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<n-i-1;j++) {
                cout<<" ";
            }
            for(int j=0;j<=i;j++) {
                char ch = 'A' + j;
                cout<<ch;
            }
            for(int j=i-1;j>=0;j--) {
                char ch = 'A' + j;
                cout<<ch;
            }
            cout<<endl;
        }
    }
};