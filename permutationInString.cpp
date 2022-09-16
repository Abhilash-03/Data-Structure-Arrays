/* Leetcode Problem:-567. Permutation in String

Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
 

Constraints:

1 <= s1.length, s2.length <= 104
s1 and s2 consist of lowercase English letters.

*/

#include<iostream>

using namespace std;

class Solution{
 
 private:
   bool checkEqual(int a[26], int b[26]){
      for(int i = 0; i<26; i++){
        if(a[i] != b[i]) return 0;
      }
      return 1;
   }

 public:
   bool checkInclusion(string s1, string s2){
     
     int count1[26] = {0};

     for(int i = 0; i<s1.size(); i++){
        int index = s1[i] - 'a';
        count1[index]++;
     }
     
     //traverse s2 string in windows of size s1 length and compare.
     int count2[26] = {0};
     int windowSize = s1.size();
     int i = 0;


     //running for first window
     while(i<windowSize && i<s2.size()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;

     }
    
     if(checkEqual(count1, count2)) return 1;

        // process for other windows

     while(i<s2.size()){
        int newChar = s2[i];
        int index = newChar - 'a';
        count1[index]++;


        int oldChar = s2[i-windowSize];
        index = oldChar - 'a';
        count2[index]--;

        i++;

        if(checkEqual(count1, count2)) return 1;
     }

     return 0;  
   }

};