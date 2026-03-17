//217

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Type1 
        // unordered_set<int> seen(nums.begin(), nums.end());
        // return seen.size() != nums.size();
        

        
        // Type2 // better
        unordered_set<int> seen;
            for (int num : nums)
                if (!seen.insert(num).second)
                    return true;

            return false;
    }
};
