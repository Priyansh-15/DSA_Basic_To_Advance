#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
            return fun(0, s.length()-1, s);
        }

        bool fun(int l, int r, string &s) {
            if(l>=r)
                return true;
            return s[l]==s[r] and fun(l+1, r-1, s);
        }
};