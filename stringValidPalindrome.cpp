/*leetcode problem:- 

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

Example:=
Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.

*/
#include<iostream>

using namespace std;

class Solution{
private:
   bool isValid(char ch){
    if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
   }

   int toLowerCase(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
   }

   bool checkPalindrome(string a){

    int s = 0;
    int e = a.length()-1;

    while(s <= e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
   }

  public:
    bool isPalindrome(string s){
        string temp = "";

        for(int i = 0; i<s.length(); i++){
            if(isValid(s[i])){
                temp.push_back(s[i]);
            }
        }

        for(int i = 0; i<temp.length(); i++){
            temp[i] = toLowerCase(temp[i]);
        }

        return checkPalindrome(temp);


        /*
        Second Approach:= Two pointers approach.

        int n = s.size();
        int l = 0, r = n-1;

        while(l<r){
            while(l<r && !isalnum(s[l])){
                l++;
            }
            while(l<r && !isalnum(s[r])){
                r--;
            }
            
            if(tolower(s[l++]) != tolower(s[r--])){
                return false;
            }
        }
        return true;
        
        */

    }
};