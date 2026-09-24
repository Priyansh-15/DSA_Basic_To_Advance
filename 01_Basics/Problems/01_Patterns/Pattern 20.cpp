#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern20(int n) {
        for(int i=0;i<2*n-1;i++) {
            if(i<n) {
                for(int j=0;j<=i;j++) {
                    cout<<"*";
                }
                for(int j=0;j<2*(n-i-1);j++) {
                    cout<<" ";
                }
                for(int j=0;j<=i;j++) {
                    cout<<"*";
                }
                cout<<endl;
            // } else if( i == n) {
            //     for(int j=0;j<2*i;j++) {
            //         cout<<"*";
            //     }
            //     cout<<endl;
            } else {
                for(int j=0;j<2*n-i-1;j++) {
                    cout<<"*";
                }
                for(int j=0;j<2*(i-n+1);j++) {
                    cout<<" ";
                }
                for(int j=0;j<2*n-i-1;j++) {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
    }
};