/*
Given an array of distinct elements which was initially sorted. This array may be rotated at some unknown point. The task is to find the minimum element in the given sorted and rotated array. 

Example 1:

Input:
N = 10
arr[] = {2,3,4,5,6,7,8,9,10,1}
Output: 1
Explanation: The array is rotated 
once anti-clockwise. So minimum 
element is at last index (n-1) 
which is 1.
*/
//TC = O(log n), SC = O(1)
class Solution {
    // Function to find the minimum element in sorted and rotated array.
    static int minNumber(int arr[], int low, int high) {
        // Your code here
        int n = arr.length;
        low = 0 ; high = n-1;
        while(low < high){
            int mid = (low + high) / 2;
            if(arr[mid] > arr[high]){
                low = mid+1;
            }else{
                high = mid;
            }
        }
        return arr[high];
    }
}
