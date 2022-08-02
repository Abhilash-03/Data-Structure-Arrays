/* ---Leetcode Duplication of zero.
Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.

Example 1:

Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
Example 2:

Input: arr = [1,2,3]
Output: [1,2,3]
Explanation: After calling your function, the input array is modified to: [1,2,3]
*/

#include<iostream>
#include<vector>
using namespace std;

class  Solution {
public:
    void duplicateZeros(vector<int>& arr){
            vector<int> ans;
            for(auto i : arr){
                if(i == 0){
                    ans.push_back(0);
                }
                ans.push_back(i);
            }
            
            for(int i = 0; i<arr.size(); i++){
                arr[i] = ans[i];
            }
    }
};

int main(){
   return 0;
}

// Explanation
// ------------
/*
let original array = [1,0,4,5,0,2,0,1];
when we traverse the original array then whenever 0 will occur then we dublicate it, and other than zero element will be written as it is.  
We travrse and and take first element and put it at the end of temp array.
temp array = [1,0,0,4,5,0,0,2] , temp array look something like this after than we copy the temp array element in original array.
*/