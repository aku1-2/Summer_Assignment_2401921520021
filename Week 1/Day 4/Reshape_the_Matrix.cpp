/*
In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.
You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.
The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.
If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.


Time Complexity:-O(m × n) size of original matrix , Space Complexity:-O(m × n)  size of matrix of reshape matrix
*/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m= mat.size();
        int n= mat[0].size();
        if((m*n)!=(r*c))
           return mat;
        vector<vector<int>> reshape(r,vector<int>(c));
        vector<int> a;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
             a.push_back(mat[i][j]);
            }
        }
        int s=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
             reshape[i][j]=a[s++];
            }
        }
        return reshape;
    }
};
