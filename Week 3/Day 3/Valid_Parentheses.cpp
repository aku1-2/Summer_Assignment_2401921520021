/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size()%2!=0){
            return false;
        }
        for(int i=0;i<s.size();i++){
            //opening case
            if(s[i]=='(' || s[i]=='[' || s[i]=='{' ){
                st.push(s[i]);
            }
            else{
                if(st.empty())
                return false;
                else
                {
                   if((st.top()=='(' && s[i]==')') ||(st.top()=='[' && s[i]==']') || (st.top()=='{' && s[i]=='}') )
                   st.pop();
                   else
                   return false;
                   
                }
            }
        }
        return st.size()==0;
    }
};
