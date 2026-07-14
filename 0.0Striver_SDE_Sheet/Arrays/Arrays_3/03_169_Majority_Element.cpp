#include<bits/stdc++.h>
using namespace std;


// better 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        for (auto it : mp) {
            if (it.second > nums.size() / 2) {
                return it.first;
            }
        }

        return -1;
    }
};

// optimal 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }

            count += (num == candidate) ? 1 : -1;
        }

        return candidate;
    }
};





//#include <bits/stdc++.h>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int cnt = 1, majority = nums[0];
       for(int i = 1; i < nums.size(); i++){
        if(nums[i] == majority){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt == 0){
            majority = nums[i + 1];
        }
       }
       for(int i = 0; i < nums.size(); i++){
        if(nums[i] == majority){
            cnt++;
        }
       }
       if(cnt > nums.size() / 2);
          return majority;
    }
};