/*

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/

#include <iostream>
using namespace std;

void pattern13(int n ){
    int flag= 1;
    for(int i =1 ; i <= n ; i ++){
        for(int j= 1; j <= i ; j++){
            cout<< flag << " ";
            flag= flag +1;
        }
        cout<< endl;
    }
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
        pattern13(n);
    }
}
