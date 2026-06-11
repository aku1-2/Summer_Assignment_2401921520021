/*
Given an encoded string, return its decoded string.
The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is being repeated exactly k times. 
Note that k is guaranteed to be a positive integer.
You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc. 
Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeated numbers, k. 
For example, there will not be input like 3a or 2[4].
The test cases are generated so that the length of the output will never exceed 105.


Time Complexity:- O(m), Space Complexity:- O(m)  size of decoded string (ans)


*/

class Solution {
public:
    string decodeString(string s) {
        stack<int> st1;
        stack<string> st2;
        string ans = "";
        int num = 0;

        for (char ch: s){
            if (isdigit(ch)){
                num = num * 10 + (ch - '0');
            }

            else if (ch == '['){
                st1.push(num);
                st2.push(ans);
                num = 0;
                ans = "";
            }

            else if (ch == ']'){
                int k = st1.top();
                st1.pop();
                string temp = st2.top();
                st2.pop();

                while (k--){
                    temp += ans;
                }
                ans = temp;
            }
            else{ 
                ans += ch;
        }
        }
        return ans;
    }
};
