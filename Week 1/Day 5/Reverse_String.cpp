/*
Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        //method 1
      //Time Complexity:- O(n), Space Complexity:-O(n)
        vector<char> k;
        int i=0;
        /*for(int j=0;j<s.size();j++){
            k.push_back(s[j]);
        }
        for(int j=s.size()-1;j>=0;j--){
          s[i]=k[j];
          i++;
        }

        //method 
      // Time Complexity:- O(n), Space Complexity:-O(1)
          char k;
          int middle=(s.size())/2;
        for(int j=s.size()-1;j>=middle;j--){
             k=s[j];
             s[j]=s[i];
             s[i]=k;
             i++;
        }
        
    }
};
