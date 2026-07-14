#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool isPalindrome(string s, int start, int end) {
        while (start <= end) {
            if (s[start++] != s[end--]) {
                return false;
            }
        }
        return true;
    }
    void solve(int index, string s, vector<string>& substring,
               vector<vector<string>>& res) {
        if (index == s.size()) {
            res.push_back(substring);
            return;
        }
        for (int i = index; i < s.size(); i++) {
            if (isPalindrome(s, index, i)) {
                substring.push_back(s.substr(index, i - index + 1));
                solve(i + 1, s, substring, res);
                substring.pop_back();
            }  
        }
    }

public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> substring;
        solve(0, s, substring, res);
        return res;
    }
};





 