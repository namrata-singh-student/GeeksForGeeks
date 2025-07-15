class Solution {
  public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        // Code here
        int m = arr1.size();
        int n = arr2.size();
        int i =0 , j=0;
        int sum1 = 0, sum2= 0;
        int ans=0;
        while(i < m && j < n){
            if(arr1[i]<arr2[j]){
                sum1+= arr1[i];
                i++;
            }else if(arr1[i]>arr2[j]){
                sum2+=arr2[j];
                j++;
            }else{
                ans += max(sum1,sum2)+arr1[i];
                i++;
                j++;
                sum1=0;
                sum2=0;
            }
        }
        while(i < m) sum1 += arr1[i++];
        while(j < n) sum2 += arr2[j++];
        
        ans += max(sum1, sum2);
        return ans;
    }
};
