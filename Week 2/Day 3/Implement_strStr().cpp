/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
Time Complexity:- Worst case: O(n × m), best case:- O(m) , Space Complexity:-O(m)
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            if(haystack.substr(i,needle.size()) == needle){ 
                return i;
            }
            }
            return -1;
        }
    
};
