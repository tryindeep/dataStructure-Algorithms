#include<bits/stdc++.h>
using namespace std;



// better using map    
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int> mp;
       int n = nums.size();
       for(int i= 0 ; i < n ; i++){
        int num = nums[i];
        int moreneeded = target - num;
        if(mp.find(moreneeded) != mp.end()){
            return {mp[moreneeded] , i };
        }
        mp[num] = i;
       }
       return {-1,-1};
    }
};