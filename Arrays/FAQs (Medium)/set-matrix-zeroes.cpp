#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // Your code goes here
        vector<bool>r(matrix.size(),false);
        vector<bool>c(matrix[0].size(),false);
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[i].size();j++) {
                if(matrix[i][j] == 0) {
                    r[i] = true;
                    c[j] = true;
                }
            }
        }
        for(int i=0;i<matrix.size();i++) {
            if(r[i]) {
                for(int j=0;j<matrix[i].size();j++) {
                    matrix[i][j] = 0;
                }
            }
        }
        for(int j=0;j<matrix[0].size();j++) {
            if(c[j]) {
                for(int i=0;i<matrix.size();i++) {
                    matrix[i][j] = 0;
                }
            }
        }
        // for(int i=0;i<matrix.size();i++) {
        //     for(int j=0;j<matrix[i].size();j++) {
        //         if(matrix[i][j] == 0) {
        //             matrix[0][j] = 0;
        //             matrix[i][0] = 0;
        //         }
        //     }
        // }

        // for(int i=0;i<matrix.size();i++) {
        //     if(matrix[i][0] == 0) {
        //         for(int j=0;j<matrix[i].size();j++) {
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }

        // for(int j=0;j<matrix[0].size();j++) {
        //     if(matrix[0][j] == 0) {
        //         for(int i=0;i<matrix.size();i++) {
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }
    }
};