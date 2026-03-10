
/*

1
12
123
1234
12345

*/
#include<iostream>
using namespace std;

void pattern3(int n ){
    for (int i = 1; i <= n ; i++){
        for(int j = 1; j<=i ; j++)
        {
            cout << j << " ";
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
        pattern3(n);
    }
}