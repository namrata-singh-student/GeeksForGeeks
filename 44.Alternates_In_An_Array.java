/*
You are given an array arr[], the task is to return a list elements of arr in alternate order (starting from index 0).

Examples:

Input: arr[] = [1, 2, 3, 4]
Output: 1 3
Explanation:
Take first element: 1
Skip second element: 2
Take third element: 3
Skip fourth element: 4
  */
class Solution {
    // function to print alternate elements of an array
    public ArrayList<Integer> getAlternates(int arr[]) {
        // Code Here
        ArrayList<Integer> result = new ArrayList<>();
        int n = arr.length;
        for(int i = 0; i<n ;i+=2){
            result.add(arr[i]);
        }
        return result;
    }
}
