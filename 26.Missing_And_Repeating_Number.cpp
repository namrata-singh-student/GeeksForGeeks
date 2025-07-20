//Brute Force Approach--- But it will give runtime error due to time limit exceed , one test case will not pass.
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        int missNo = -1;
        int repeatedNo = -1;
        for(int i = 1; i<=n ; i++){
            int count = 0;
            for(int j = 0 ; j<n ;j++){
                if(arr[j] == i){
                    count++;
                }
            }
            
            if(count == 2) repeatedNo = i;
            else if(count == 0) missNo = i;
            if(missNo != -1 && repeatedNo != -1) break;
        }
        return {repeatedNo , missNo};

        //Better Approach--------------->>>>>>> TC= O(n), SC = O(1)
        vector<int> hash(n + 1, 0);
        for(int i = 0; i<n ;i++){
            hash[arr[i]]++;
        }
        int missNo = -1;
        int repeatedNo = -1;
        for(int i = 1; i<=n ;i++){
            if(hash[i] == 2) repeatedNo = i;
            else if(hash[i] == 0) missNo =i ;
            //if(missNo!= -1 && repeatedNo != -1) break;
        }
        return {repeatedNo , missNo};

//Optimal Approach--------------------------------------------------->>>>>>>>>>>>>>>
      //Optimal Approach----TC= O(n), SC= o(1)
        long long n = arr.size();
        long long SN = (n*(n+1) )/ 2;
        long long S2N= (n*(n+1)*(2*n+1)) / 6;
        long long s = 0 , s2 = 0;
        for(int i = 0; i < n; i++){
            s += arr[i];
            s2 += (long long)(arr[i]) * (long long)(arr[i]);
        }
        
        long long val1 = s - SN;//x-y
        long long val2 = s2 - S2N;
        val2 = val2 / val1; //x+y
        long long x = (val1 + val2) /2; 
        long long y = (x - val1);
        
        return {(int)x, (int)y}; // {repeated, missing}
    }
};
