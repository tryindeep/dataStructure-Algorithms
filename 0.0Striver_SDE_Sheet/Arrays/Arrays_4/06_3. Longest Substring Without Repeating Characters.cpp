#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hashLen = 256;
        vector<int> hash(hashLen, -1);
        int left = 0, right =0, maxlength = 0;

        while(right < s.size()){
            if(hash[s[right]] != -1){
                if(hash[s[right]] >= left){
                    left = hash[s[right]]+1;
                }
            }
            int length = right - left + 1;
            maxlength = max(maxlength, length);
            hash[s[right]] = right;
            right++;
        }
        return maxlength;
    }
};