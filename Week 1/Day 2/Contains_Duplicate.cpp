//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
// Time Complexity: O(N) , Space Complexity: - O(N) Unordered_set


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i : nums){
            if(s.find(i)!= s.end()){// we didn't reached end. 
                return true;
            }
            s.insert(i);
        }
        return false;
    }
};
