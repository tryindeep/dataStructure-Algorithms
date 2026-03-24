
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // Dimentions
        int m = matrix.size();
        int n = matrix[0].size();
        
        // flag;
        bool firstRowZero = false;
        bool firstColZero = false;
        
        // Phase 1 
        // first row having zero or not 
        for (int i = 0 ; i < n ; i++){
            if(matrix[0][i] == 0){
                 firstRowZero = true;
            }
        }
         // Phase 2
        // first column having zero or not
        for (int i = 0 ; i < m ; i++){
            if(matrix[i][0] == 0){
                 firstColZero = true;
            }
        }
        
        //Phase 3
         // mark The the Zeros in first row 
        for(int i = 1 ; i < m ; i++){
            for(int j = 1 ; j< n ; j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        // phase 4 
        // set the matrix sell
        for(int i = 1 ; i < m ; i++){
            for(int j = 1 ; j< n ; j++){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        // phse 5 
        // handle the first row 
        if (firstRowZero){
            for (int i = 0 ; i < n ; i++) {
                matrix[0][i] = 0;
            }
        }
        // handle the first column  
        if (firstColZero){
            for (int i = 0 ; i < m ; i++) {
                matrix[i][0] = 0;
            }
        }


    }
};

int main() {
    Solution obj;
    int m, n;

    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    obj.setZeroes(matrix);

    cout << "\nResult:\n";
    for (auto row : matrix) {
        for (auto val : row)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}