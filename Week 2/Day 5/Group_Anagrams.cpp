/*
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

Time complexities:- O(n*klog k), Space complexities:-O(n*k)
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>>ans;
        for (string s: strs) {
            string k= s;
            sort(k.begin(),k.end());

            m[k].push_back(s);
        }
        for (auto &i: m) {
            ans.push_back(i.second);// respective anagram pe uska strings honge key-anagram, strings saare second(value)
        }
        return ans;
    }
};
