#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            return fun(1, nums);
        }

        bool fun(int i, vector<int>& nums) {
            if(i >= nums.size())
                return true;
            return nums[i] >= nums[i-1] and fun(i+1, nums);  
        }
};