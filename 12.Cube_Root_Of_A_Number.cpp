class Solution {
  public:
    int cubeRoot(int n) {
        // code here
        // int ans = pow(n, (1/3.));
        // return ans;
        int ans =cbrt(n);
        return ans;
    }
};

//we can do it by using both pow and cbrt function. And sometime we can do it by writing double also
