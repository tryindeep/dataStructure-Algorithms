#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        unordered_map<int , int > mp;
        mp[0] =1;
        int count = 0;
        int sum =0;
        for(int i= 0 ; i < arr.size() ; i++ ){
            sum += arr[i];
            if(mp.find(sum - k) != mp.end()){
                count += mp[sum - k];
            }
            mp[sum]++;
        }
        return count;
    }
};



class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int left =0 , right =0;
        long long sum = nums[0];
        int maxLen =0;
        int n = nums.size();

        while(right < n){
            while (left <= right && sum > k){
                sum -= nums[left];
                left++;
            }
            if (sum == k ) {
                maxLen = max(maxLen , right - left + 1);
            }
            right++;
            if(right < n) sum += nums[right];
        }
        return maxLen;
    }
};




