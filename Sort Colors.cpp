/*Ques: Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.*/

 
 /*example:
 Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]*/

//code:
/*Make variable count0, count1, count2 for 0's, 1's and 2's respectively.
Traverse the array and count the number of 0's 1's and 2's.
Now overwrite the original array in order of 0's, 1's and 2's using the count variables.
Keeping a count of 0's 1's and 2's and updating the original array
Time complexity - O(2N)*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;
        
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]==0)
                count0++;
            if(nums[i]==1)
                count1++;
            if(nums[i]==2)
                count2++;
        }
        
        int i = 0;
        while(count0)
        {
            nums[i] = 0;
            i++;
            count0--;
        }
        while(count1)
        {
            nums[i] = 1;
            i++;
            count1--;
        }
        while(count2)
        {
            nums[i] = 2;
            i++;
            count2--;
        }
    }
};

//link of problem


//https://leetcode.com/problems/sort-colors/submissions/