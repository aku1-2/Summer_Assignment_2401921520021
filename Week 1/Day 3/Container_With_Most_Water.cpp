/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.

Time Complexity:- O(n)
Space Complexity:- O(1)

*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int left=0 , right=height.size()-1;
        int maxarea=0;
        while(left<right){
            area = (right-left) * min(height[left],height[right]);
            maxarea = max(maxarea,area);
            if(height[left]<height[right])
                left++;
                else
                right--;
        }
        return maxarea;
    }
};
