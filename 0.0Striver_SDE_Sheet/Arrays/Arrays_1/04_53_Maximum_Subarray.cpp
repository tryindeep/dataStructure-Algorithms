// (Kadane's Algorithm)
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0, max = INT_MIN;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];

            if(sum > max){
                max = sum;
            }

            if(sum < 0 ){
                sum = 0;
            }
        }
        return max; 
    }
};
//


class Solution {
public:
    vector<int> maxSubArray(vector<int>& nums) {
        long long maxSum = LLONG_MIN;
        long long sum = 0;

        int start = 0;
        int ansStart = 0, ansEnd = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(sum == 0) {
                start = i;
            }

            sum += nums[i];

            if(sum > maxSum) {
                maxSum = sum;
                ansStart = start;
                ansEnd = i;
            }

            if(sum < 0) {
                sum = 0;
            }
        }

        return {ansStart, ansEnd};
    }
};

// // if we required the indexes
// class Solution {
// public:
//         vector<int> maxSubArray(vector<int>& nums) {
//         long long maxSum = INT_MIN;
//         long long sum = 0;
//         long long start = 0;
//         long long ansStart = -1;
//         long long ansEnd = -1;

//         for(int i = 0; i< nums.size(); i++){
//             if(sum == 0){
//                 start = i;
//             }
//             sum += nums[i];
//             if(sum > maxSum){

//                 maxSum = sum;
//                 ansStart = start;
//                 ansEnd = i;

//             }
//             if(sum < 0){
//                 sum =0;
//             }
//         }
//         return {ansStart , ansEnd};
//     }
// }; 