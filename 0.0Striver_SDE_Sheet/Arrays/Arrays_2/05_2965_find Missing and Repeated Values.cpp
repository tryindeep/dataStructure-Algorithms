#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        long N = n * n;

        long long sum = 0 , sqSum=0;
        // actual sum and sqaureSum  
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                long long val = grid[i][j];
                sum += val;
                sqSum = sqSum + (val*val);
            }
        }
        // expected sum and sumsquare
        long long expSum = N * (N+1)/2;
        long long expsqSum = N * (N+1) * (2*N+1) /6;

        // Build the equation;
        long long Diff = sum - expSum; // x - y ----------- 1
        long long sqDiff =  sqSum - expsqSum; // x^2 - y^2---------2

        // x   -  y   = diff;
        // x^2 -  y^2 = sqDiff 
        // (x - y) ( x + y ) = spDiff
        // ( x + y ) = sqDiff/diff ;
        long long sumXY = sqDiff/Diff;

        // solve 
        long long x = (Diff + sumXY) / 2;
        long long y = sumXY - x;

        return {(int)x , (int)y};

    }
};