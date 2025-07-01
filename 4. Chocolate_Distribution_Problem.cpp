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
---------------------------------------------------
  //Java Code
  // User function Template for Java

class Solution {
    public int findMinDiff(ArrayList<Integer> arr, int m) {
        // your code here
        int n= arr.size();
        Collections.sort(arr);
        int minDiff = Integer.MAX_VALUE;
        for(int i=0;i<= (n-m); i++){
            int diff = arr.get(m+i-1) - arr.get(i);
            minDiff = Math.min(diff, minDiff);
        }
        return minDiff;
    }
}
