

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int n = arr.size();
        vector<int>lead;
        int max = 0;
        for(int i = n-1 ; i >= 0 ;i--){
            if(arr[i] >= max){
                max = arr[i];
                lead.push_back(arr[i]);
            }
        }
        reverse(lead.begin() , lead.end());
        return lead;
    }
};
