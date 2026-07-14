#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        if (n == 0)
            return 0;
        int longest = 1;
        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }

        for (auto it : st) {
            if (st.find(it - 1) == st.end()) {
                int cnt = 1;
                int x = it;
                while (st.find(x + 1) != st.end()) {
                    x = x + 1;
                    cnt = cnt + 1;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};

// another and better

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        for (int num : st) {

            // Check if num is the start of a sequence
            if (st.find(num - 1) == st.end()) {

                int currNum = num;
                int currLen = 1;

                while (st.find(currNum + 1) != st.end()) {
                    currNum++;
                    currLen++;
                }

                longest = max(longest, currLen);
            }
        }
        return longest;
    }
};