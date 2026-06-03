/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
Time Complexity:- O(n logn) sort function dominates loop O(n)
Space Complexity:- O(n) vector v
*/

//First Approach
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector<int> v;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
            v.push_back(nums[i]);
        }
        sort(v.begin(),v.end());
        return v;
    }
};


//Second Approach Two Pointer
//Time-Complexity:- O(N) for loop
//Space-Complexity:- O(N) // due to result vector

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        vector<int> result(n);
        int i=0;
        int j=n-1;
        int pos=n-1;
        while(i<=j){
            int leftsq = nums[i]*nums[i];
            int rightsq = nums[j]*nums[j];
            if(leftsq > rightsq){
                result[pos--]=leftsq;
                i++;
            }else{
                result[pos--]=rightsq;
                j--;
            }
        }
      return result;
    }
};
