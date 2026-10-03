#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		int arraySum(vector<int>& nums){
			//your code goes here
            return fun(0, nums);
		}

        int fun(int i, vector<int>& nums) {
            if(i == nums.size())
                return 0;
            return nums[i] + fun(i+1, nums);
        }
};