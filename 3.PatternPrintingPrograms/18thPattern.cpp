/*

E 
D E 
C D E 
B C D E 
A B C D E 

*/
 
#include <iostream>
using namespace std;

void pattern18(int n ){
    for(int i = 0 ; i < n ; i++){
        for(char ch = 'E' - i ; 'E' >= ch ; ch++){
            cout << ch << " ";
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
        pattern18(n);
    }
}
