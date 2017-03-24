/*
Write a function that takes a string as input and returns the string reversed.

Example:
Given s = "hello", return "olleh".
*/

#include <string>
using namespace std;

class Solution {
public:
    string reverseString(string s) {
        string st;
     for (auto i = s.rbegin(); i!= s.rend(); i++)
        st+=(*i);
    return st;
    
    }
};
