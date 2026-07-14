#include <bits/stdc++.h>
using namespace std;
class Solution {
    void help(int  i, vector<int>& candidates, int target, int sumTillNow, vector<int> &subset, vector<vector<int>> &ans){
        //base condition 
        if( sumTillNow == target){
            ans.push_back(subset);
            return;
        }
         if ( sumTillNow > target) return ;
        if (i >= candidates.size()) return ;
       


        // skip the index 
        help(i+1,candidates, target, sumTillNow, subset, ans);

        // take the index
        sumTillNow += candidates[i];
        subset.push_back(candidates[i]);
        help(i,candidates, target, sumTillNow, subset, ans);
        sumTillNow -= candidates[i];
        subset.pop_back();
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sumTillNow =0;
        vector<int> subset;
        vector<vector<int>> ans; 
        help(0,candidates, target, sumTillNow, subset, ans);
        return ans;
    }
};









class Solution {
   void solve (int index, int target , int sumTillNow,vector<int>& candidates, vector<int>& subset,vector<vector<int>>& ans ){

        //base case 
        if(sumTillNow == target) {
            ans.push_back(subset);
            return;
        }
        if(sumTillNow > target) return;
        if(index >= candidates.size()) return;

        // skip ith element
        solve(index + 1, target, sumTillNow,candidates, subset, ans);

        // take the ith element
        sumTillNow += candidates[index];
        subset.push_back(candidates[index]);
        solve(index, target, sumTillNow,candidates, subset, ans);
        sumTillNow -= candidates[index]; // backtrack
        subset.pop_back();// backtrack
   }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sumTillNow = 0;
        vector<int> subset;
        vector<vector<int>> ans;
        solve(0,target, sumTillNow,candidates, subset, ans);
        return ans;
    }
};

