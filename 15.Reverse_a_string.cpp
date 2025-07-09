// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n =s.length();
        // for(int i=0;i<n/2;i++){
        //     char temp =s[i];
        //     s[i] = s[n-i-1];
        //     s[n-i-1] = temp;
        // }
        
        //one more method
        reverse(s.begin(),s.end());
        return s;
    }
};

//java code

class Solution {
    public String reverseString(String s) {
        char[] chars = s.toCharArray();
        int n = chars.length;
        
        for (int i = 0; i < n / 2; i++) {
            char temp = chars[i];
            chars[i] = chars[n - i - 1];
            chars[n - i - 1] = temp;
        }
        
        return new String(chars);
        //one more way
        //return new StringBuilder(s).reverse().toString();

    }
}
