#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int bt=0, br=matrix[0].size()-1, bb=matrix.size()-1, bl=0;
        vector<int>ans;
        int i=0,j=0;
        bool flag=true;
        while(1) {
            flag = true;
            while(j<=br) {
                flag=false;
                ans.push_back(matrix[i][j]);
                j++;
            }
            if(flag)
                break;
            bt++;
            i++;
            j--;
            flag = true;
            while(i<=bb) {
                flag = false;
                ans.push_back(matrix[i][j]);
                i++;
            }
            j--;
            i--;
            if(flag)
                break;
            br--;
            flag= true;
            while(j>=bl) {
                flag = false;
                ans.push_back(matrix[i][j]);
                j--;
            }
            i--;
            j++;
            if(flag)
                break;
            bb--;
            flag = true;
            while(i>=bt) {
                flag = false;
                ans.push_back(matrix[i][j]);
                i--;
            }
            i++;
            j++;
            if(flag)
                break;
            bl++;
        }
        // ans.push_back(matrix[i][j]);
        return ans;
    }
};