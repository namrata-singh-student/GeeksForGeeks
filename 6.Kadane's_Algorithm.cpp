// Given an integer array arr[]. You need to find the maximum sum of a subarray.

// Examples:

// Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
// Output: 11
// Explanation: The subarray {7, -1, 2, 3} has the largest sum 11.
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        long long sum=0, maxSum=LLONG_MIN;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            maxSum=max(sum,maxSum);
            if(sum<0){
                sum=0;
            }
        }
        return maxSum;
    }
};
