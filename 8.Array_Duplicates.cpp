class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int n= arr.size();
        vector<int>result;
        sort(arr.begin(), arr.end());
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                result.push_back(arr[i]);
            }
        }
        return result;
    }
};
-------------------------------------------------------------------------------------
  //Java Code
  class Solution {
    public ArrayList<Integer> findDuplicates(int[] arr) {
        // code here
        ArrayList<Integer> ans = new ArrayList<>();
        Arrays.sort(arr);
        for(int i=0; i<arr.length-1; i++){
            if(arr[i]==arr[i+1]){
                ans.add(arr[i]);
            }
        }
        return ans;
    }
}
