// User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int n=arr.size();
        int max = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max= arr[i];
            }
        }
        return max;
      //........................one more way........................
        // for(int i=0;i<n;i++){
        //     if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
        //         return arr[i];
        //     }
        // }
    }
};

//java---------------------------------------------------------------
// User function Template for Java

class Solution {
    public int findMaximum(int[] arr) {
        // code here
        int max = Integer.MIN_VALUE;
        for(int i =0; i<arr.length; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
}
