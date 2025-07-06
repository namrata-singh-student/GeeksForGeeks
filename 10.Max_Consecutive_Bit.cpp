class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int n = arr.size();
        int count = 1;
        int maxCount = INT_MIN;
        for(int i = 1;i<n ;i++){
            if(arr[i] == arr[i-1]){
                count++;
            }else{
                maxCount = max(count , maxCount);
                count =1;
            }
        }
        return max(count, maxCount);
    }
};
