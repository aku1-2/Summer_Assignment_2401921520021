/*
Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] 
is the number of days you have to wait after the ith day to get a warmer temperature. 
If there is no future day for which this is possible, keep answer[i] == 0 instead.
*/
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n= temperatures.size();
       stack<int> s;
       vector<int> answer(n);
       for(int i=0;i<n;i++){
           while(!s.empty() && temperatures[i]>temperatures[s.top()]){
             int diff = s.top();
             s.pop();
             answer[diff] = i-diff;
           }
           s.push(i);
       }
       return answer;
    }
};
