/*
Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
In other words, return true if one of s1's permutations is a substring of s2.

Time complexity:- , space complexity:-
*/


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;
        vector<int> freq(26,0);
        for(char c:s1){
            freq[c-'a']++;
        }
        for(int i=0; i <= s2.size()-s1.size();i++){
            string a = s2.substr(i,s1.size());
             vector<int> freq1(26,0);
            for(char c:a)
               freq1[c-'a']++;

               if(freq==freq1)
               return true;
               
        }
        return false;
        
    }
};
