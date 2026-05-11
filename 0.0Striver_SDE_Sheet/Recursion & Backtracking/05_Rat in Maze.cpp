#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool isSafe(int row, int col, int n,
                vector<vector<int>> &maze, vector<vector<int>> &visited)
    {

        return (row >= 0 && row < n && col >= 0 && col < n &&
                maze[row][col] == 1 && visited[row][col] == 0);
    }

    void solve(int row, int col, int n,
               vector<vector<int>> &maze, vector<vector<int>> &visited,
               string path, vector<string> &ans)
    {

        // base case
        if (row == n - 1 && col == n - 1)
        {
            ans.push_back(path);
            return;
        }
        // mark the self visited
        visited[row][col] = 1;
        // down
        if (isSafe(row + 1, col, n, maze, visited))
        {
            solve(row + 1, col, n, maze, visited, path + "D", ans);
        }
        // left
        if (isSafe(row, col - 1, n, maze, visited))
        {
            solve(row, col - 1, n, maze, visited, path + "L", ans);
        }
        // right
        if (isSafe(row, col + 1, n, maze, visited))
        {
            solve(row, col + 1, n, maze, visited, path + "R", ans);
        }
        // up
        if (isSafe(row - 1, col, n, maze, visited))
        {
            solve(row - 1, col, n, maze, visited, path + "U", ans);
        }

        // backtrack
        visited[row][col] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &maze, int n)
    {
        vector<string> ans;
        vector<vector<int>> visited(n, vector<int>(n, 0));
        if (maze[0][0] == 1)
        {
            solve(0, 0, n, maze, visited, "", ans);
        }
        return ans;
    }
};
