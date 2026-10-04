
#include <bits/stdc++.h>
using namespace std;

class Solution {
    void solve(int i, int n , vector<string>& output,int openingBracket,int closingBracket , string s){
        if(openingBracket == n && closingBracket == n){
            output.push_back(s);
            return;
        }
        if(openingBracket < n){
            solve(0,n,output,openingBracket+1,closingBracket,s+"(");
        }
        if(closingBracket < openingBracket){
            solve(0,n,output,openingBracket,closingBracket+1,s+")");
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> output;
        int openingBracket = 0;
        int closingBracket = 0;
        solve(0,n,output,openingBracket,closingBracket,"");
        return output;

    }
};