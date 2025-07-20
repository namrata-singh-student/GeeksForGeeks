// Given an array of integers arr[], the task is to find the first equilibrium point in the array.

// The equilibrium point in an array is an index (0-based indexing) such that the sum of all elements before that index is the same as the sum of elements after it. Return -1 if no such point exists. 

// Examples:

// Input: arr[] = [1, 2, 0, 3]
// Output: 2 
// Explanation: The sum of left of index 2 is 1 + 2 = 3 and sum on right of index 2 is 3.
// Input: arr[] = [1, 1, 1, 1]
// Output: -1
// Explanation: There is no equilibrium index in the array.

//Solution------------------- TC= O(n), SC = O(1)
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n= arr.size();
        long long totalSum = 0;
        for (int i = 0; i < n; i++) {
            totalSum += arr[i];
        }

        long long leftSum = 0;
        for (int i = 0; i < n; i++) {
            long long rightSum = totalSum - leftSum - arr[i];

            if (leftSum == rightSum) {
                return i ; // 0-based index
            }

            leftSum += arr[i];
        }

        return -1;
        
    }
};
