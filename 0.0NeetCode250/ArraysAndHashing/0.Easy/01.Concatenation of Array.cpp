// 1929

#include<bits/stdc++.h>
using namespace std;


//  better
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        ans.insert(ans.end(),nums.begin(),nums.end());
        return ans;
    }
};

// optimal 
vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(2 * n);

    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }

    return ans;
}

// TC => O(n)
// SC => O(n)