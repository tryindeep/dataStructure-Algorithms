#include <bits/stdc++.h>
using namespace std;
class Solution {
    void solve(int index, string digits,string output, string mapping[],vector<string> &ans ){
        // base case 
        if( index == digits.size()){
            ans.push_back(output);
            return;
        }

        int number =digits[index] - '0'; // char - ascii = number 
        string value = mapping[number];
        for(int i = 0 ; i < value.size(); i++){
            output.push_back(value[i]);
            solve(index+1,digits,output,mapping,ans);
            output.pop_back(); // backktrack

        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int index=0;
        string output;
        string mapping[10] = {"", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(index,digits,output,mapping,ans);
        return ans;
    }
};