#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[i].size();j++) {
                if(i+j < matrix.size()-1) {
                    swap(matrix[i][j], matrix[matrix.size()-1-j][matrix.size()-1-i]);
                }
            }
        }
    }
};