class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int largest=INT_MIN,secLargest=INT_MIN;
        for(int num: arr){
            if(num>largest){
                secLargest= largest;
                largest=num;
            }else if(num>secLargest && num<largest){
                secLargest=num;
            }
        }
        if(secLargest==INT_MIN){
            return -1;
        }else{
            return secLargest;
        }
    }
};
