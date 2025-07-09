class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        int n= s.length();
        int i =0, j=n-i-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }else{
                i++;
                j--;
            }
        }
        return true;
    }
};
//java
class Solution {
    boolean isPalindrome(String s) {
        // code here
        int n = s.length();
        int i=0;
        int j =n-i-1;
        while(i<j){
            if(s.charAt(i)!=s.charAt(j)){
                return false;
            }else{
                i++;
                j--;
            }
        }
        return true;
    }
}
