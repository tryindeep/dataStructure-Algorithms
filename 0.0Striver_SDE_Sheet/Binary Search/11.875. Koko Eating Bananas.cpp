#include <bits/stdc++.h>
using namespace std;


class Solution {
    long long findTotalHours(vector<int>&  piles , int hourly){
        long long totalHrs = 0;
        for(int i = 0 ; i < piles.size(); i++){
            totalHrs += ceil((double)piles[i] / (double)hourly);
        }
        return totalHrs;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 , high = *max_element(piles.begin() , piles.end());
        while( low <= high ){
            int mid = (low + high) / 2;

            long long totalHours = findTotalHours(piles , mid);

            if( totalHours <= h){
                high = mid -1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};