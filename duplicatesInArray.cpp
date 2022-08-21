/*---Leetcode question.
287. Find the Duplicate Number 

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution{
  public:
   int findDuplicate(vector<int>& nums){
          int first = 0, last = nums.size()-1;
          int count;

          while(first <= last){
            int mid = first + (last - first)/2;
            count = 0;

            for(int i:nums){
                if(i<= mid){
                    count++;
                }
            }

            if(count<=mid){
                first = mid + 1;
            }
            else{
                last = mid -1;
            }
          }

          return first;


   }

};

int main(){
   return 0;
}
