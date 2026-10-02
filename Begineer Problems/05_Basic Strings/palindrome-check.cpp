#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
            int l=0, r=s.length()-1;
            while(l<r) {
                if(s[l] != s[r])
                    return false;
                l++;
                r--;
            }
            return true;
		}
};