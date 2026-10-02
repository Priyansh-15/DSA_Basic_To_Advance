#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverse(int arr[], int n){
        int l=0,r=n-1;
        while(l<r){
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
    }
};
