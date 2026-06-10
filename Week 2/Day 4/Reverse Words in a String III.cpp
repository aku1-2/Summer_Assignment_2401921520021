/*
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.
Time Complexity:-O(N) , Space Complexity:-O(1)

*/

class Solution {
public:
    string reverseWords(string s) {
        int a=0;
        for(int i=0;i<=s.size();i++){
             if(i==s.size() || s[i]==' ')
                 {
                    int left=a,right=i-1;
                    while(left<right){
                        swap(s[left], s[right]);
                        left++;
                        right--;
                    }
                    a=i+1;
                 }
        }
        return s;

    }
};
