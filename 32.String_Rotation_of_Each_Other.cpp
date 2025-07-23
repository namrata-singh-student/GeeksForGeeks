// Strings Rotations of Each Other
// Difficulty: EasyAccuracy: 43.83%Submissions: 295K+Points: 2Average Time: 15m
// You are given two strings s1 and s2, of equal lengths. The task is to check if s2 is a rotated version of the string s1.

// Note: A string is a rotation of another if it can be formed by moving characters from the start to the end (or vice versa) without rearranging them.

// Examples :

// Input: s1 = "abcd", s2 = "cdab"
// Output: true
// Explanation: After 2 right rotations, s1 will become equal to s2.

class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        int m = s1.length();
        int n = s2.length();
        if(m != n) return false;
        //Brute Force------ TC= O(n2), SC= O(1)
        // for(int count = 1; count<= m; count++){
        //     rotate(begin(s1), begin(s1)+1, end(s1));
        //     if(s1 == s2){
        //         return true;
        //     }
        // }
        // return false;

        //Otimal-----TC=O(n), SC = O(n), using inbuilt function
        
        if((s1 + s1).find(s2) != string :: npos){
            return true;
        }else{
            return false;
        }
        
    }
};

// 💡 Explanation:
// If s2 is a rotation of s1, then s2 must be a substring of s1 + s1.

// Example:
// If s1 = "ABCD" and s2 = "CDAB"
// Then s1 + s1 = "ABCDABCD"
// And "CDAB" is a substring of "ABCDABCD", so return true.
