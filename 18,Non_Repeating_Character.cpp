//optimal code-------- TC- O(n), SC- O(n);
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        int n=s.length();
        
        unordered_map<char,int>mp;
        for(char ch : s){
            mp[ch]++;
        }
        for(char ch : s){
            if(mp[ch] == 1){
                return ch;
            }
        }
        return '$';
    }
};
//brute force-----TC= O(n2), SC- O(1)
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        int n = s.length();
        for (int i = 0; i < n; i++) {
            bool isRepeating = false;
            for (int j = 0; j < n; j++) {
                if (i != j && s[i] == s[j]) {
                    isRepeating = true;
                    break;
                }
            }
            if (!isRepeating) {
                return s[i];
            }
        }
        return '$';
    }
};

//Java code
class Solution {
    public char nonRepeatingChar(String s) {
        int[] freq = new int[256];
        for (int i = 0; i < s.length(); i++) {
            freq[s.charAt(i)]++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (freq[s.charAt(i)] == 1) {
                return s.charAt(i);
            }
        }

        return '$';
    }
}

