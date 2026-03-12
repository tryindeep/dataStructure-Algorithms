/*

* * * * * 
* * * * 
* * * 
* * 
* 

*/

// #include<iostream>
// using namespace std;

// void pattern5(int n ){
//      for(int i = n ; i > 0; i--){
//         for(int j = i ; j > 0 ; j--){
//             cout << "* ";
//         }
//         cout << endl;

//     }
//     cout << endl;
// }

// int main (){
//     int t;
//     cin >> t;
//     for(int i = 0; i <t; i++){
//         int n;
//         cin >> n;
//         int t;
//         pattern5(n);
//     }
// }

// another method (linenumber - row + 1)

#include<iostream>
using namespace std;

void pattern5(int n ){
    for(int i = 1; i <= n ; i++){
        for(int j=0; j< n-i+1; j++){
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

        pattern5(n);
    }
}