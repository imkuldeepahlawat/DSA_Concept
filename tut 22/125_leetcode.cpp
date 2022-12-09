#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    // Base Case...
    if(s.empty())  return true;
    // Initialize two pointer variables, left and right and point them with the two ends of the input string...
    int left = 0, right = s.length() - 1;
    // Traverse all elements through the loop...
    while(left < right) {
        // if both the characters are same...
        // Continue to next iteration and move both pointers to point to next alphanumeric character till left < right...
        if(tolower(s[left]) == tolower(s[right])) {
            left++;
            right--;
        }
        // Move the left pointer to right so it points to a alphanumeric character...
        else if(!isalpha(s[left]) && !isdigit(s[left])) {
            left++;
        }
        // Similarly move right pointer to left so it also points to a alphanumeric character...
        else if(!isalpha(s[right]) && !isdigit(s[right])) {
            right--;
        }
        // Otherwise return false...
        else{
            return false;
        }
    }
    // After loop finishes, the string is said to be palindrome, hence return true...
    return true;
}

// this is my code
/*

class Solution {
public:
    bool isPalindrome(string s) {
    // Base Case...
        if(s.empty()){
            return true;
        }
        int st = 0, e = s.length() - 1;
    // Traverse all elements through the loop...
        while(st < e) {
            if(tolower(s[st]) == tolower(s[e])) {
                st++;
                e--;
            }
            else if(!isalpha(s[st]) && !isdigit(s[st])) {
                st++;
            }
            else if(!isalpha(s[e]) && !isdigit(s[e])) {
                e--;
            }
            else{
                return false;
            }
        }
        // After loop finishes, the string is said to be palindrome, hence return true...
        return true;
    }
};

*/