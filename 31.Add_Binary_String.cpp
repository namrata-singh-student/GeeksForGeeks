// Given two binary strings s1 and s2 consisting of only 0s and 1s. Find the resultant string after adding the two Binary Strings.
// Note: The input strings may contain leading zeros but the output string should not have any leading zeros.

// Input: s1 = "1101", s2 = "111"
// Output: 10100
// Explanation:
//  1101
// + 111
// 10100


//Overall TC = O(max(m, n)), Overall SC = O(max(m, n))
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        int m = s1.length();
        int n = s2.length();
        int carry = 0;
        string ans="";
        int i = m-1;
        int j = n-1;
        while(i>=0 || j>=0){
            int sum = 0;
            if(i>=0 && s1[i] == '1') sum++;
            if(j>=0 && s2[j] == '1') sum++;
            
            if(sum + carry == 3){
                ans += '1';
                carry = 1;
            }else if( sum + carry == 2){
                ans += '0';
                carry = 1;
            }else if(sum + carry == 1){
                ans += '1';
                carry = 0;
            }else{
                ans += '0';
                carry = 0;
            }
            i--;
            j--;
        }
        if(carry == 1){
            ans += to_string(carry);
        }
        reverse(ans.begin(), ans.end());
        i = 0;
        while( ans[i] == '0'){
            ans.erase(0,1);
        }
        return ans;
    }
};
