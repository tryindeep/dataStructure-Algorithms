/*

*********
 *******
  *****
   ***
    *

*/
#include<iostream>
using namespace std;

void pattern8(int n ){
    for(int i = 0 ; i < n ; i++){
        for(int j= 0; j < i  ; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*(n-i)-1; j++){
            cout << "*";

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
        pattern8(n);
    }
}
