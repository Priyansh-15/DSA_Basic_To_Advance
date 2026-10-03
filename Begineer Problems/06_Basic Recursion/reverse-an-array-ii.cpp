#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		vector<int> reverseArray(vector<int>& nums){			
			//your code goes here
            fun(0, nums.size()-1, nums);
            return nums;
		}

        void fun(int l, int r, vector<int>& nums) {
            if(l>=r) {
                return;
            }
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            return fun(l+1, r-1, nums);
        }
};