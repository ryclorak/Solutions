# https://leetcode.com/problems/palindrome-number
# this code will return whether an integer is a palindrome
# simplest way I could think of was converting to string

#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string rts = "";
        for (int y=str.length()-1; y>=0; y--) {
            rts += str.at(y);
        }
        return (str==rts);
    }
};
