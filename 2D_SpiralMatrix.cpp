/* Leetcode Problem:- 54. Spiral Matrix //  ****IMp question.

Given an m x n matrix, return all elements of the matrix in spiral order.


Example 1:

---------------------------
1 ->  2 ->  3
            ↓
4  -> 5     6
↑           ↓
7   <-8  <- 9
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100

*/

#include<iostream>
#include<vector>

using namespace std;

class Solution{
   public:
    vector<int> spiralOrder(vector<vector<int>>& matrix){
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> ans;

        //indexing
        int top = 0, left = 0;
        int bottom = row-1, right = col-1;

        int count = 0;
        int total = row * col;

        while(count < total){
            for(int index = left; index <= right && count<total; index++){
                ans.push_back(matrix[top][index]);
                count++;
            }
            top++;

            for(int index = top; index<= bottom && count<total; index++){
                ans.push_back(matrix[index][right]);
                count++;
            }
            right--;

            for(int index = right; index>=left && count<total; index--){
                ans.push_back(matrix[bottom][index]);
                count++;
            }
            bottom--;

            for(int index = bottom; index >= top && count<total; index--){
                ans.push_back(matrix[index][left]);
                count++;
            }
            left++;
        }

        return ans;
    } 
};