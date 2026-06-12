/*
Given an array of characters chars, compress it using the following algorithm:
Begin with an empty string s. For each group of consecutive repeating characters in chars:
If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars. 
Note that group lengths that are 10 or longer will be split into multiple characters in chars.
After you are done modifying the input array, return the new length of the array.
You must write an algorithm that uses only constant extra space.
Note: The characters in the array beyond the returned length do not matter and should be ignored.

Time complexity:- O(N), Space complexity:-O(1)
*/
class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int t=0;
        while(i<chars.size()){
            char current = chars[i];
            int count=0;
            while(i<chars.size() && current== chars[i]){
                count++;
                i++;
            }
            chars[t++]= current;
            if(count > 1 ){
                string news = to_string(count);
                for(char c: news){
                    chars[t++]= c;
                }
            }
        }
        return t;
    }
};

