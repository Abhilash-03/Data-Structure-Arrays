/** ---- leetcode Array question no.1
 Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
 */

#include<iostream>
#include<vector>

using namespace std;

class Solution{
  public:
  int findMaxConsecutiveOnes(vector<int>& nums){
         int result = 0;
         int count = 0;

         for(int i = 0; i < nums.size(); i++){
             if(nums[i] == 0){
                 count = 0;
             }
             else{
                 count++;
                 result = max(result, count);
             }
         }
         return result;
  }
};

int main(){
     vector<int> nums;
     nums.assign(6,1);
     



   return 0;
}