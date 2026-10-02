#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			//your code goes here
            if(s.length() != goal.length())
                return false;
            for(int i=0;i<s.length();i++) {
                if(s == goal) 
                    return true;
                char ch = s[0];
                s = s.substr(1);
                s += ch;
            }
            return s==goal;
		}
};