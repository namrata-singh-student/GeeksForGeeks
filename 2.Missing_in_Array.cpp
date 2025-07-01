class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n= arr.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        long long actualSum= ((long long) (n+1)*(n+2))/2;
        long long misNo = (actualSum-sum);
        return int(misNo);
        // vector<int> hash(n, 0);
        // for (int num : arr) {
        //     hash[num] = 1;
        // }
        // for(int i=1;i<n;i++){
        //     if(hash[i]==0){
        //         return i;
        //     }
        // }
        // return -1;
    }
};
