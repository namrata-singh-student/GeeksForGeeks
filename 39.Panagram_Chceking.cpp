/*
You are given a string s. You need to find if the string is a panagram or not.

A panagram contains all the letters of english alphabet at least once.

Examples:

Input: s = "Thequickbrownfoxjumpsoverthelazydog"
Output: 1
Input: s = "HeavyDuty"
Output: 0
*/

// User function Template for C++
//TC = O(N), SC = O(1)
class Solution {
  public:
    bool isPanagram(string &s) {
        // Your code here
        unordered_set<char> letters;
        for(char ch : s) {
            if(isalpha(ch)) {
                ch = tolower(ch);
                letters.insert(ch);
            }
        }
        
        return letters.size() == 26;
    }
};
