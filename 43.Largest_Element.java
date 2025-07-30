/*
Given an array arr[]. The task is to find the largest element and return it.

Examples:

Input: arr[] = [1, 8, 7, 56, 90]
Output: 90
Explanation: The largest element of the given array is 90.
Input: arr[] = [5, 5, 5, 5]
Output: 5
Explanation: The largest element of the given array is 5.
Input: arr[] = [10]
Output: 10
Explanation: There is only one element which is the largest.
*/

class Solution {
    public static int largest(int[] arr) {
        // code here
        int n = arr.length;
        if(n == 1) return n;
        int largest = Integer.MIN_VALUE;
        for(int i = 0; i<n ;i++){
            if(arr[i] > largest){
                largest = arr[i];
            }
        }
        return largest;
    }
}
