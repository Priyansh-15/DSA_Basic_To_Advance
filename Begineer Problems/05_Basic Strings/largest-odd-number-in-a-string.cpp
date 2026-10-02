#include <bits/stdc++.h>
using namespace std;

class Solution{	
public:		
    string largeOddNum(string& s){
        //your code goes here
        string ans;
        int l=0, r=s.length()-1;
        while(r>=0) {
            if((s[r]-'0')%2==1) {
                break;
            }
            r--;
        }
        while(l<=r) {
            if(s[l] == '0')
                l++;
            else
                break;
        }
        ans = s.substr(l,r-l+1);
        return ans;
    }
};