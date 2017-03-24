#include <string>
class Solution {
public:
    string reverseString(string s) {
        string st;
     for (auto i = s.rbegin(); i!= s.rend(); i++)
        st+=(*i);
    return st;
    
    }
};
