/*
Given an m x n matrix, return all elements of the matrix in spiral order.
Time Complexity:- O(m*n), Space Complexity:- O(m*n) as ans vector stores all the elements of matrix.

*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n=matrix[0].size();
        int srow=0,scol=0,erow=m-1,ecol=n-1;
        vector<int> ans;
        //top
        while(srow<=erow && scol<=ecol){

        
        for(int i= scol;i<=ecol;i++){
         ans.push_back(matrix[srow][i]);
        }

        //rightside
            for(int i=srow+1;i<=erow;i++){
                ans.push_back(matrix[i][ecol]);
            }

        //bottom
          for(int i=ecol-1;i>=scol;i--){
            if(srow==erow)
            break;
            ans.push_back(matrix[erow][i]);
          }

        //leftside
          for(int i=erow-1;i>=srow+1;i--){
            if(scol==ecol)
            break;
             ans.push_back(matrix[i][scol]);
          }

          srow++;
          scol++;
          erow--;
          ecol--;

    }
       return ans;
    }

};
