#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int addDigits(int num){
		//your code goes here
        return fun(num, 0);
	}

    int fun(int num, int sum) {
        if(num/10 == 0) {
            sum += num;
            if(sum/10 == 0)
                return sum;
            return fun(sum, 0);
        } 
        return fun(num/10, sum + num%10);
    } 
};