/*
Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.

Time Complexity:- O(N), Space Complexity:- O(N)
*/

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string newstring = s+s;
        newstring = newstring.substr(1,newstring.size()-2);
        if(newstring.find(s)!= string::npos){
            return true;
        }
    return false;
;    }
};
