#include <bits/stdc++.h>
using namespace std;

class Solution{	
public:		
	vector<char> reverseString(vector<char>& s){
		//your code goes here
        vector<char>ans;
        fun(0, s, ans);
        return ans;
	}

    void fun(int i, vector<char> &s, vector<char> &ans) {
        if(i == s.size()) 
            return;
        fun(i+1, s, ans);
        ans.push_back(s[i]);
    }
};