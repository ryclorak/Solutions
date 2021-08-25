/** Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000. */




class Solution {
    public String longestPalindrome(String s) {
        String temp = s;
        for (int i=0; i<s.length(); i++)
        {
            if (s.substring(0,1) == s.substring(1,2)) 
            {
                System.out.println("Match");
                
            }
            else if (s.substring(0,1) == s.substring(2,3))
            {
                System.out.println("Match 2");
                return s.substring(0,3);
            }    
            ++i;
                
        }
        return s.substring(0,3);
    }
}
