/*-----Geeksforgeeks Question------
Leaders in an array
EasyAccuracy: 49.96%Submissions: 100k+Points: 2

Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

 

Example 1:

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.
 

Example 2:

Input:
n = 5
A[] = {1,2,3,4,0}
Output: 4 0
 

Your Task:
You don't need to read input or print anything. The task is to complete the function leader() which takes array A and n as input parameters and returns an array of leaders in order of their appearance.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

 
*/

 #include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;


class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
         vector<int> ans;
         
        //  Last element of the array is always a leader.
        int leader = a[n-1];
        ans.push_back(leader);

        for(int i = n-2; i>=0; i--){
            if(leader <= a[i]){
                leader = a[i];
                ans.push_back(leader);
            }
        }
        reverse(ans.begin(), ans.end()); //we have to reverse the element because we have to give the element in left to right direction.
        return ans;
    }
};

/*
Approach
initially =   [16, 17, 4, 3, 5, 2]
                                ^ => leader = 2, so print 2

step 1        [16, 17, 4, 3, 5, 2]
                             ^      => a[i] > leader ; leader = a[i], and print 5.

step 2        [16, 17, 4, 3, 5, 2]
                          ^        => a[i] > leader ; 3>5 -> false then we do nothing
                          .
                          .
                          .so on so forth untill the last scan of the element.

and the printing result is 2 5 17, but we have to give the result 17 5 2 so that's why we have to reverse the array.                                                        
*/