
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int index, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans) {
        // base case
        if (index == nums.size()) {
            ans.push_back(ds);
            return;
        }

        // 1️⃣ pick
        ds.push_back(nums[index]);
        solve(index + 1, nums, ds, ans);
        ds.pop_back(); // backtrack

        // 2️⃣ not pick → skip duplicates
        int i = index;
        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
            i++;
        }

        solve(i + 1, nums, ds, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // required
        vector<vector<int>> ans;
        vector<int> ds;

        solve(0, nums, ds, ans);
        return ans;
    }
};