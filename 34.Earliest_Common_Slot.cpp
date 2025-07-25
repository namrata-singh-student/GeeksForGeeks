// You are given two lists of availability time slots, slots1 and slots2, for two people. Each slot is represented as [start, end], and it is gurranted that within each list, no two slots overlap (i.e., for any two intervals, either start1>end2 or start2>end1). Given a metting duration d, return the earliest common time slot of length of least d. If no such slot exits, return an empty array.

// Examples:

// Input: slots1 = [[10,50], [60,120], [140,210]], slots2 = [[0,15], [60,70]], d = 8
// Output: [60,68]
// Explanation: The only overlap is [60,70] (10 minutes), which is enough for an 8-minute meeting, so answer is [60,68]

class Solution {
  public:
    vector<int> commonSlot(vector<vector<int>> &a, vector<vector<int>> &b, int d) {
        // Code Here
        int i=0,j=0;
        while(i<a.size() && j<b.size()){
            int start = max(a[i][0], b[j][0]);
            int end = min(a[i][1], b[j][1]);
            
            if(end - start >= d){
                return {start , start+d };
            }
            if(a[i][1] < b[j][1]){
                i++;
            }else{
                j++;
            }
        }
        return {};
    }
};
