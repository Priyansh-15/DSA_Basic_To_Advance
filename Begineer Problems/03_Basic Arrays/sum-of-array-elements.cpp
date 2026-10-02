#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int sum(int arr[], int n) {
        int sum = 0;
        while(n--) {
            sum += arr[n];
        }
        return sum;
	}
};