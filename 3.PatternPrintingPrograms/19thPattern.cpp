/*

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

#include <iostream>
using namespace std;

void pattern19(int n)
{

    // upper part
    int iniS = 0;
    for (int i = 0; i < n; i++)
    {

        // star
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        iniS = iniS + 2;
        cout << endl;
    }

    // lower part
    iniS = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        iniS = iniS - 2;
        cout << endl;
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
        pattern19(n);
    }
}
