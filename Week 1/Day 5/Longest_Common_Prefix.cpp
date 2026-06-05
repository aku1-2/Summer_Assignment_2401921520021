/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
Time Complexity:- O(M*N), Space Complexity:-O(1),  ignoring output space taken by output string num.
 
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       for(int i=0;i<strs[0].size();i++){
        char ch= strs[0][i];
        for(int j=1;j<strs.size();j++){
            if(i>strs[j].size() || strs[j][i]!=ch){ //exit when mismatched
              string num= strs[0].substr(0,i);
              return num;
              }
        }
       }
       return strs[0];
    }
};
