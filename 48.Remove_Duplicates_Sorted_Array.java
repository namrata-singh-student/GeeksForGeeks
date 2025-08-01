/*
You are given a sorted array arr[] containing positive integers. Your task is to remove all duplicate elements from this array such that each element appears only once. Return an array containing these distinct elements in the same order as they appeared.
Examples :

Input: arr[] = [2, 2, 2, 2, 2]
Output: [2]
Explanation: After removing all the duplicates only one instance of 2 will remain i.e. [2] so modified array will contains 2 at first position and you should return array containing [2] after modifying the array.
Input: arr[] = [1, 2, 4]
Output: [1, 2, 4]
Explation:  As the array does not contain any duplicates so you should return [1, 2, 4].
*/
//TC = O(n), SC= O(n)
//JAVA code------------------------------------>
class Solution {
    // Function to remove duplicates from the given array.
    ArrayList<Integer> removeDuplicates(int[] arr) {
        // code here
        HashSet<Integer> st = new HashSet<>();
        ArrayList<Integer>result = new ArrayList<>();
        
        for(int num : arr){
            if(!st.contains(num)){
                st.add(num);
                result.add(num);
            }
        }
        return result;
    }
}

//C++ Code-------------------------------------->
class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        unordered_set<int>st;
        vector<int>result;
        for(int num : arr){
            //if number is not present previosly
            if(st.find(num) == st.end()){
                st.insert(num);
                result.push_back(num);
            }
        }
        return result;
    }
};
