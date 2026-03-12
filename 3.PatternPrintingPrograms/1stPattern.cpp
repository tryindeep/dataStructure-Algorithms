/*
    ****
    ****
    ****
    ****
*/

#include<iostream>
using namespace std;

void pattern1(int n ){
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            cout << "* ";
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
        pattern1(n);
    }
    
}

