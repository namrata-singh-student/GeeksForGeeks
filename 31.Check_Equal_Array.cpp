// User function template for C++

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        //1st approach
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        // return a == b;
        
        //2nd---------- best TC=O(M+N) but extra SC
        unordered_map<int,int>ma;
        unordered_map<int,int>mb;
        for(auto num : a){
            ma[num]++;
        }
        for(auto num : b){
            mb[num]++;
        }
        return ma == mb;
    }
};
