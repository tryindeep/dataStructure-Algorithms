
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size(); // children
        int m = s.size(); // cookie
        int childIndex = 0 ;
        int cookieIndex = 0;
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());

        while( childIndex < n && cookieIndex < m ){
            if (s[cookieIndex] >= g[childIndex])
            {
                childIndex++;
            }
            cookieIndex++;
        }
        return childIndex;
    }
};