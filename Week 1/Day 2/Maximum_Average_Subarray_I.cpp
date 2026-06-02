/*
You are given an integer array nums consisting of n elements, and an integer k.
Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. 
Any answer with a calculation error less than 10-5 will be accepted.

Time Complexity:- O(N) , Space Complexity :- O(1)
*/


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum =0.0;
        double avg =0.0;
        double maxavg=0.0;
        for(int i=0;i<k;i++){
            sum = sum + nums[i];
        }
        avg = sum/k;
        maxavg= avg;
        for(int i =k;i< nums.size();i++){
            sum = sum + (nums[i]- nums[i-k]);
            avg = sum /k;
            if(maxavg< avg)
            maxavg = avg;
        }
        return maxavg;

    }
};
