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

        int count = 0, candidate = 0;

        for (int num : nums) {

            if (count == 0) {
                candidate = num;
            }

            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};