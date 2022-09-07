/*
Problem Statement
Suggest Edit
You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
Now, your task is to find the first and last occurrence of ‘K’ in ARR.
Note :
1. If ‘K’ is not present in the array, then the first and the last occurrence will be -1. 
2. ARR may contain duplicate elements.
For example, if ARR = [0, 1, 1, 5] and K = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.
Input Format
The first line of input contains an integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case contains two single-space separated integers ‘N’ and ‘K’, respectively.

The second line of each test case contains ‘N’ single space-separated integers denoting the elements of the array/list ARR.

Sample Input 1:
2
6 3
0 5 5 6 6 6
8 2
0 0 1 1 2 2 2 2
Sample Output 1:
-1 -1 
4 7
Explanation Of Sample Output 1:
For the first test case, 3 is not present in the array. Hence the first and last occurrence of 3 is -1 and -1.

For the second test case, the first occurrence of 2 in at index 4 and last occurrence is at index 7.
Sample Input 2:
2
4 0
0 0 0 0
1 2
2

Sample Output 2:
0 3
0 0
*/

#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>& arr, int n, int k){
    int start = 0;
    int end = n-1;
    int ans = -1;

    while(start<= end){
        int mid = start+(end-start)/2;

        if(arr[mid] == k){
            ans = mid;
            end = mid -1;
        }
        else if(arr[mid] < k){
            start = mid + 1;
        }
        else{
            end  = mid -1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}


int lastOccurence(vector<int>& arr, int n, int k){
    int s = 0;
    int end = n-1;
    int ans = -1;

    while(s<= end){
        int mid = s+(end -s)/2;

        if(arr[mid]== k){
            ans  = mid;
            s = mid+1;
        }
        else if(arr[mid]<k){
            s = mid +1;
        }
        else{
            end = mid+1;
        }
        mid = s+(end-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k){
  
  pair<int, int>p;
  
  p.first = firstOccurence(arr, n, k);
  p.second = lastOccurence(arr, n, k);
  return p;


}

