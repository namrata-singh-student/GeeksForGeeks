//PROBLEM----------
// Given a list of words, S followed by two specific words, word1 and word2, the task is to find the minimum distance between the indices of these two words in the list.

// Note: word1 and word2 are both in the list, and there can be multiple occurrences of words in the list.

// Example :

// Input:S = { "the", "quick", "brown", "fox", "quick"}
// word1 = "the"
// word2 = "fox"
// Output: 3
// Explanation: Minimum distance between the words "the" and "fox" is 3


// User function template for C++
class Solution {
  public:

    int shortestDistance(vector<string> &s, string word1, string word2) {
        // Your code goes here
        int n = s.size();
        int d1 = -1, d2 = -1;
        int ans = INT_MAX;
        for(int i = 0; i<n ; i++){
            if(s[i] == word1) d1 = i;
            if(s[i] == word2) d2 = i;
            if(d1 != -1 && d2 != -1){
                ans = min(ans, abs(d1 - d2));
            }
        }
        return ans;
        
    }
};
