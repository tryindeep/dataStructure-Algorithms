#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool canWePlaceAllCows(vector<int> &nums,int distance, int cow){
        int cntCows = 1, last = nums[0];
        for(int i = 1 ; i < nums.size(); i++){
            if(nums[i] - last >= distance){
                cntCows++;
                last= nums[i];
            }
            if(cntCows >= cow ) return true;
        }
        return false;
    }
public:
    int aggressiveCows(vector<int> &nums, int k) {
        sort(nums.begin(),  nums.end());
        int n = nums.size();
        int low = 1 , high = nums[n-1] - nums[0];

        while(low <= high){
            int mid = (low + high)/2;
            
            if(canWePlaceAllCows(nums , mid , k) == true){
                low = mid+1;
            }else{
                high = mid-1;
            }
        } 
        return high;
    }
    
};