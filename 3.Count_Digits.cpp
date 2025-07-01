class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int temp=n;
        int count=0;
        while(temp!=0){
            int d = temp%10;
            if(d!=0 && n%d == 0){
                count++;
            }
            temp= (temp-d)/10;
        }
        return count;
    }
};
