#include <bits/stdc++.h>;
using namespace std;
class Solution {
    bool isSafeToColor (int node , vector<vector<int>> &adj,vector<int> &color, int c ){
        for(int i = 0; i < adj[node].size(); i++){
            int nei = adj[node][i];
            if(color[nei] == c) return false; 
        }
        return true;
    }

    bool resolve(int node , vector<vector<int>> &adj,vector<int> &color,int n , int m ){
        if(node == n ) return true;

        for(int c = 1; c<=m ; c++){
            if(isSafeToColor(node , adj, color, c)){
                color[node] = c;
                if(resolve( node+1, adj , color , n , m )){
                    return true;
                }
                color[node] = 0; // backtrack
            }
        }
        return false;

    }
public:
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        vector<vector<int>> adj(v);
        for( auto &e : edges){
            int firstElement = e[0];
            int SecondElement = e[1];
            adj[firstElement].push_back(SecondElement);
            adj[SecondElement].push_back(firstElement);
            
        }
        vector<int> color(v , 0);
        return resolve( 0, adj , color , v , m );
       
    }
};





//  // Step 1: build adjacency list
//         vector<vector<int>> adj(v);
//         for (auto &e : edges) {
//             int u = e[0];
//             int w = e[1];
//             adj[u].push_back(w);
//             adj[w].push_back(u); // undirected graph
//         }

//         // Step 2: color array
//         vector<int> color(v, 0);

//         // Step 3: backtracking
//         return solve(0, adj, color, v, m);