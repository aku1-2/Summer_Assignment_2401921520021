/*
You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.
Evaluate the expression. Return an integer that represents the value of the expression.

Note that:
The valid operators are '+', '-', '*', and '/'.
Each operand may be an integer or another expression.
The division between two integers always truncates toward zero.
There will not be any division by zero.
The input represents a valid arithmetic expression in a reverse polish notation.
The answer and all the intermediate calculations can be represented in a 32-bit integer.

*/
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i=0; i<tokens.size();i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                if(tokens[i] == "+")
                  s.push(a+b);
                if(tokens[i] == "-")
                  s.push(a-b);
                if(tokens[i] == "*")
                  s.push(a*b);
                if(tokens[i] == "/")
                  s.push(a/b);
            }
            else{
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};
