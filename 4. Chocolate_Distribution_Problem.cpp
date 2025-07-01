class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int n= a.size();
        int minDiff = INT_MAX;
        sort(a.begin(),a.end());
        for(int i=0;i<= (n-m); i++){
            int diff = a[m+i-1] - a[i];
            minDiff = min(diff, minDiff);
        }
        return minDiff;
    }
};
