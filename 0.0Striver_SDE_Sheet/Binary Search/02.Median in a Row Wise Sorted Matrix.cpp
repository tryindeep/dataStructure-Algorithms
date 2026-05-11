
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countLessEqual(vector<int>& row, int mid){
        return upper_bound(row.begin(), row.end(), mid) - row.begin();
    }
    int findMedian(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int low = INT_MAX;
        int high = INT_MIN;

        for (int i = 0; i < rows; i++)
        {
            low = min(low, matrix[i][0]);
            high = max(high, matrix[i][cols - 1]);
        }

        int desired = (rows * cols + 1) / 2;

        while (low < high)
        {
            int mid = low + (high - low) / 2;

            int count = 0;
            for (int i = 0; i < rows; i++)
            {
                count += countLessEqual(matrix[i], mid);
                if (count >= desired)
                    break;
            }


            if (count < desired)
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
        return low;
    }
};