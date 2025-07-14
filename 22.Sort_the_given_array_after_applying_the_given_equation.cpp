class Solution {
  public:
    vector<int> sortArray(vector<int> &arr, int A, int B, int C) {
        // code here
        int n =arr.size();
        vector<int>ans;
        for(int i = 0; i<n ;i++){
            int equ = ((A* pow(arr[i],2) )+ (B * arr[i]) + C);
            ans.push_back(equ);
        }
        sort(ans.begin() , ans.end());
        return ans;
    }
};

//java
class Solution {
    public ArrayList<Integer> sortArray(int[] arr, int A, int B, int C) {
        // Code here
        ArrayList<Integer> ans = new ArrayList<>();
        int n=arr.length;
        for(int i=0; i<n; i++){
            int trans = A*(arr[i]*arr[i])+B*arr[i]+C;
            ans.add(trans);
        }
        Collections.sort(ans);
        return ans;
    }
}
