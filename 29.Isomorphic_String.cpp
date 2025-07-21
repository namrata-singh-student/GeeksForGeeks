class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        int m =s1.length();
        int map_s1[128] ={0};
        int map_s2[128] ={0};
        
        for(int i = 0 ; i<m ;i++){
            if(map_s1[s1[i]] != map_s2[s2[i]]) return false;
            map_s1[s1[i]] = i+1;
            map_s2[s2[i]] = i+1;
        }
        return true;
    }
};
