#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isomorphicString(string s, string t) {
    	//your code goes here
        map<char,char>m;
        map<char,char>n;
        for(int i=0;i<s.length();i++) {
            if(m.find(s[i]) != m.end()) {
                if(m[s[i]] != t[i])
                    return false;
            } else {
                if(n.find(t[i]) != n.end()) {
                    return false;
                }
                m[s[i]] = t[i];
                n[t[i]] = s[i];
            }
        }
        return true;
    }
};