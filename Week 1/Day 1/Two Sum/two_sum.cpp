//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//two loops approach
//Time Complexity O(N^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
         int a = target- nums[i];
         for(int j=0;j<nums.size();j++){
            if(nums[j]==a && i!=j) // here the index i, which we used, should not be equal to the indexes we are searching.
                {
                     ans.push_back(i);
                     ans.push_back(j);
                     return ans;
                 }
             }
         }
     return {};
   }
};

// Using unordered map for O(N) time and space complexity 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> a;
       vector<int> ans;
      for(int i=0;i<nums.size();i++){
        int difference = target- nums[i];
        if(a.find(difference) != a.end()){
          ans.push_back(a[difference]);
          ans.push_back(i);
          return ans;
        }
        a[nums[i]]=i;
      }
return {};
    }
}
