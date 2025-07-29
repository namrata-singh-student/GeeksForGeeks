/*
Given an array arr[] of positive integers which may contain duplicate elements, return the frequency of each distinct element.

Examples:

Input: arr[] = [1, 2, 2, 3, 3, 5]
Output: [[1, 1], [2, 2], [3, 2], [5, 1]]
Explaiantion: Here element 1 and 5 occur 1 times, 2 and 3 occur 2 times.
*/
class Solution {
    public ArrayList<ArrayList<Integer>> countFreq(int[] arr) {
        // code here
        Map<Integer, Integer> mp = new HashMap<>();
        for(int num : arr){
            mp.put(num , mp.getOrDefault(num , 0) +1);
        }
        ArrayList<ArrayList<Integer>> result = new ArrayList<>();
        for(Map.Entry<Integer, Integer> entry : mp.entrySet()){
            // ArrayList<Integer> temp = new ArrayList<>();
            // temp.add(entry.getKey());
            // temp.add(entry.getValue());
            // result.add(temp);
            result.add(new ArrayList<>(Arrays.asList(entry.getKey(), entry.getValue())));
        }
        return result;
    }
}
