//Given an integer array nums, find the subarray with the largest sum, and return its sum.

//Time Complexity :- O(N),   Space Complexity:- O(1).


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int currSum = nums[0];
       int maxSum = nums[0];
       for(int i =1; i< nums.size();i++){
        int sum = currSum+ nums[i];
        if(sum<nums[i]){
            currSum = nums[i];
        }
        else{
            currSum += nums[i];
        }
        if(currSum > maxSum){
            maxSum= currSum;
        }
        sum=0;
       }
       return maxSum;

    }
};
