/*
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
Each letter in the magazine can only be used once in ransomNote.
Time Complexity:- O(N), Space Complexity:- O(1)
*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> count;
        for( char c: magazine){
            count[c]++;
        }

        for(char c: ransomNote){
            if(count[c]==0)
            return false;
              count[c]--;
        }
        return true;
    }
};
