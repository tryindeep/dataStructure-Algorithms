#include<bits/stdc++.h>
using namespace std; 

//iterative approach 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (target > nums[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};


// recursive approach 
class Solution {
    int BS(vector<int> &nums ,int target ,int low , int high){
            
        if(low > high ){ 
            return -1;
        }
        int mid = low + (high - low)/2;
        if(target == nums[mid]) return mid ;
        if(target > nums[mid]){
           return BS(nums , target , mid+1, high);
        }else{
           return BS(nums , target , low, mid-1);
        }
        
    }
public:
    int search(vector<int>& nums, int target) {
        return BS(nums , target , 0 , nums.size() - 1) ;
    }
};