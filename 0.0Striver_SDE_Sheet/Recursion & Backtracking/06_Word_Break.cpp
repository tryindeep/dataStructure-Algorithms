#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool solve(int index, string& s, unordered_set<string>& st) {
        if (index == s.size()) {
            return true;
        }
        string temp = "";
        for (int i = index; i < s.size(); i++) {

            temp += s[i];

            if (st.find(temp) != st.end()) {

                if (solve(i + 1, s, st)) {
                    return true;
                }
            }
        }
        return false;
    }

public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st(wordDict.begin(), wordDict.end());
        return solve(0, s, st);
    }
};