/*----leetcode question-> Q.231. Power of 2.
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
 
Constraints:
-231 <= n <= 231 - 1

*/

#include<iostream>

using namespace std;

class Solution{
  public:
  bool isPowerOfTwo(int n){
    // It has multiple solution.
    // first:
    return  n>0 && !(n & (n-1));

    // Second:
    return n>0? !(n & (n-1)):0;

    // third:
    return n > 0 ? ((n & (n-1)) == 0) : 0;

    // and many solution has possible above solution is one line and efficient code.
  }
};