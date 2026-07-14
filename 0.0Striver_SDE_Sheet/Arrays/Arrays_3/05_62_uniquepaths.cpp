
class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = m + n - 2;
        int r = min(m - 1, n - 1);

        long long ans = 1;

        for (int i = 1; i <= r; i++) {
            ans = ans * (N - r + i) / i;
        }

        return (int)ans;
    }
};

#include<bits/stdc++.h>
using namespace std;

// using recursion solved but time limit exceded !!
class Solution {
public:
    int countPaths( int i , int j ){

        if(i == 0 && j == 0 ) return 1;
        if(i < 0 || j < 0 ) return 0;

        int up = countPaths(i-1,j);
        int left = countPaths(i,j-1);

        return up + left;
    }
    int uniquePaths(int m, int n) {
        int i = m-1 , j = n-1;
        return countPaths(i,j);
    }
   
};