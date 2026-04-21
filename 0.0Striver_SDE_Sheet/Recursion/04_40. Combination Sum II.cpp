#include <bits/stdc++.h>
using namespace std;

class Solution {
     void solve(int i, vector<int>& candidates, vector<int>& subset, vector<vector<int>>& ans,int sum, int target) {
        // base case
        if (sum == target) {
            ans.push_back(subset);
            return;
        }
          if ( sum > target) return ;
        if (i >= candidates.size()) return ;

        // 1️⃣ pick
        subset.push_back(candidates[i]);
        sum += candidates[i];
        solve(i + 1, candidates, subset, ans,sum,target);
        sum -=  candidates[i];
        subset.pop_back(); // backtrack

        // 2️⃣ not pick → skip duplicates
    
        while (i + 1 < candidates.size() && candidates[i] == candidates[i + 1]) {
            i++;
        }

        solve(i + 1, candidates, subset, ans,sum,target);
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> subset;
        int sum =0;
        vector<vector<int>> ans;
         sort(candidates.begin(), candidates.end());
        solve( 0 , candidates, subset , ans, sum , target);
        return ans;
    }
};

/*
Time Complexity: O(2^N)
Space Complexity: O(N)
*/