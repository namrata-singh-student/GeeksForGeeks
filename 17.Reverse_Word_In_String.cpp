class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        int n =s.length();
        reverse(s.begin(),s.end());
        int i =0;
        int r=0, l=0;
        while(i<n){
            while(i<n && s[i]!=' '){
                s[r] = s[i];
                r++;
                i++;
            }
            if(l<r){
                reverse(s.begin()+l , s.begin()+r);
                s[r]=' ';
                r++;
                l = r;
            }
            i++;
        }
        s= s.substr(0,r-1);
        return s;
        // int n =s.length();
        // stringstream ss(s);
        // string token="";
        // string result = "";
        // while(ss >> token){
        //     if(!result.empty()){
        //         result = token+" "+result;
        //     }else{
        //         result =token;
        //     }
        // }
        // return result;
    }
};
