
#include <bits/stdc++.h>
using namespace std;

class Solution {
     void solve(int i, vector<int>& nums, vector<int>& subset, vector<vector<int>>& ans) {
        // base case
        if (i == nums.size()) {
            ans.push_back(subset);
            return;
        }

        // 1️⃣ pick
        subset.push_back(nums[i]);
        solve(i + 1, nums, subset, ans);
        subset.pop_back(); // backtrack

        // 2️⃣ not pick → skip duplicates
     
        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
            i++;
        }

        solve(i + 1, nums, subset, ans);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // required
        vector<vector<int>> ans;
        vector<int> subset;

        solve(0, nums, subset, ans);
        return ans;
    }
};