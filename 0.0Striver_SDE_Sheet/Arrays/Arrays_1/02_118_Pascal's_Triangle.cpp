#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> generateRow(int row){
        long long rowElement = 1 ;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col = 1; col<row ; col++){
            rowElement = rowElement * (row - col);
            rowElement = rowElement / col;
            ansRow.push_back(rowElement);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1 ; i <= numRows ; i++ ){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};

int main() {
    Solution obj;
    int n = 5;

    // Generate and print Pascal's Triangle
    vector<vector<int>> result = obj.generate(n);
    for (auto &row : result) {
        for (auto &val : row) cout << val << " ";
        cout << endl;
    }
}