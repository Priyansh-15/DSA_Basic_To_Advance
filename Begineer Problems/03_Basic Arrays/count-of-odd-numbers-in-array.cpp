#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int countOdd(int arr[], int n){
        int odd = 0;
        while(n--) {
            if(arr[n]%2 != 0) {
                odd++;
            }
        }
        return odd;
    }
};
