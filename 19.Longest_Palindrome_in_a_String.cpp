class Solution {
  public:
    string longestPalindrome(string &s) {
        // code here
        int n =s.length();
        int start = 0;
        int maxLen =1;
        for(int i= 1;i<n;i++){
            //even case
            int left = i-1;
            int right = i;
            while((left>=0 && right<n && s[left]==s[right])){
                if(right-left+1 > maxLen){
                    maxLen = right-left+1;
                    start = left;
                }
                left--;
                right++;
            }
            //odd case
            left = i-1;
            right = i+1;
            while((left>=0 && right<n && s[left]==s[right])){
                if(right-left+1 > maxLen){
                    maxLen = right-left+1;
                    start = left;
                }
                left--;
                right++;
            }
        }
        return s.substr(start, maxLen);
    }
};
