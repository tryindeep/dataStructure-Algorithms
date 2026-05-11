#include<bits/stdc++.h>
using namespace std;

// 3 types 

// Type 1 : Given row and col find the value
// row = 5,  col 3
// nCr ,  n = row - 1, r = col - 1
int  nCr (int n , int r) {
    long long res = 1;
    for(int i = 0; i < r ; i++){
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}

int pascalTriangle (int r , int c){
    return nCr(r-1, c-1 );

}


// Type 2 : using row number print the whole row 
// row = 3
vector<int> generateRow(int row ){
    long long res = 1;
    vector<int> ans;
    ans.push_back(1);
    for(int col = 1; col<row; col++){
        res = res * (row - col);
        res = res / col;
        ans.push_back(res);
    }
    return ans;
}

// Type the send whole pascal triangle 
// numberOfRows = 4
vector<int> generateRow1(int row){
    vector<int> temp;
    long long res = 1;
    temp.push_back(1);
    for(int col = 1 ; col < row; col++){
        res = res * (row - col);
        res = res / col;

        temp.push_back(res);
    }
    return temp;
}
vector<vector<int>> pascalTriangle(int numberOfRows)   
{
    vector<vector<int>> ans;
    for(int i=1; i <=numberOfRows ; i++){
        ans.push_back(generateRow1(i));
    } 
    return ans;
}








