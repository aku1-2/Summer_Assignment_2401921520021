//Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
//Time Complexity:-O(N) , Space Complexity:-O(1) for both.

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> count;
        for(char c: s){
            count[c]++;
        }
        for(int i=0;i<s.size();i++){
            if(count[s[i]]==1)
                return i;
        }
        return -1;}};





//2nd freq vector
class Solution {
public:
    int firstUniqChar(string s) {
vector<int> freq(26,0);
        for(char c: s){
            freq[c-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a']==1)
                  return i;
        }
        return -1;
    }
};

