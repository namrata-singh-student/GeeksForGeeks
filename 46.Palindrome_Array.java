/*
Given an array arr[] of positive integers. Return true if all the array elements are palindrome otherwise, return false.

Examples:

Input: arr[] = [111, 222, 333, 444, 555]
Output: true
Explanation:
arr[0] = 111, which is a palindrome number.
arr[1] = 222, which is a palindrome number.
arr[2] = 333, which is a palindrome number.
arr[3] = 444, which is a palindrome number.
arr[4] = 555, which is a palindrome number.
As all numbers are palindrome so This will return true.
Input: arr[] = [121, 131, 20]
Output: false
Explanation: 20 is not a palindrome hence the output is false.
*/

//TC =O(n log n), SC = O(1)

/*Complete the Function below*/
class Solution {
    public static boolean isPalindrome(int n){
        int original = n;
        int rev = 0;
        while(n != 0 ){
            int rem = n % 10;
            rev = rev * 10 + rem;
            n = n/10;
        }
        if(original != rev){
            return false;
        }else{
            return true;
        }
    }
    public static boolean isPalinArray(int[] arr) {
        // add code here.
        int n = arr.length;
        
        for(int i = 0; i<n ;i++){
            if(!isPalindrome(arr[i])){
                return false;
            }
        }
        return true;
    }
}
