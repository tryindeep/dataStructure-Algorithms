/*
     *
    ***
   *****
  *******
 *********

*/
#include<iostream>
using namespace std;

void pattern7(int n ){
    for(int i = 0 ; i < n ; i++){
        //space
        for(int j= 0; j < n-i-1  ; j++){
            cout << " ";
        }
        // character
        
        //space
        for(int j= 0; j < n-i-1  ; j++){
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main (){
    int t;
    cin >> t;
    for(int i = 0; i <t; i++){
        int n;
        cin >> n;
        int t;
        pattern7(n);
    }
}