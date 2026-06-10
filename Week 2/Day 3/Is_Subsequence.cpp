/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
A subsequence of a string is a new string that is formed from the original string by deleting some (or none) of the characters without disturbing 
the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

Time Complexity:- O(N) at most t string tea. Best Case:- O(1) , Space Complexity:-O(1)
*/
class Solution {
public:
    bool isSubsequence(string s, string t) {
     int i= 0;
     int j = 0;

     while(i<s.size() && j<t.size()){
        if(s[i]==t[j])
          i++;
        j++;
     }
     if(i==s.size())
          return true;
    return false;
    }
};
