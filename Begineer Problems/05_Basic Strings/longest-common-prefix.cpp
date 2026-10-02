#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			//your code goes here
            string ans = "";
            int l=0;
            while(1) {
                if(l==str[0].length())
                    return ans;
                char ch = str[0][l];
                for(int i=1;i<str.size();i++) {
                    if(l== str[i].length())
                        return ans;
                    if(str[i][l] != ch)
                        return ans;
                }
                ans += ch;
                l++;
            }
            return "";
		}
};