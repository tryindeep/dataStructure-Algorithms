#include <bits/stdc++.h>
using namespace std;

class Solution {
    int findPow(int x, int N , int M){
        long long ans = 1;
        for(int i = 0 ; i < N ; i++){
            ans *= x;

            if(ans > M) return 2;
        } 
        if(ans == M) return 1;

        return 0;
    }
public:
  int NthRoot(int N, int M) {
       int low = 1, high = M;
       while(low <= high ){
            int mid = low + ( high - low ) / 2;

            int result = findPow(mid ,N,M);
            
            if(result == 1){
                return mid;
            }else if(result == 0){
                low = mid +1;
            }else{
                high = mid - 1 ;
            } 
       }
       return -1;
    }
   
};
