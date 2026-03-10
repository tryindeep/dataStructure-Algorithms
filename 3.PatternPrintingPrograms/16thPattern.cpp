
/*

A
BB
CCC
DDDD
EEEEE
FFFFFF

*/

#include <iostream>
using namespace std;

void pattern16(int n ){
      for (int i = 0; i <= n ; i++){
        char ch = 'A' + i;
        for(int j = 0; j<=i ; j++)
        {
            cout << ch;
        }
        cout << endl;

    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int t;
        pattern16(n);
    }
}