#include <iostream>
using namespace std;

bool PalindromeOrNot(int i, string &s)
{
    if ( i >= s.size()/2 )
        return true;
    if (s[i] != s[(s.size() - i - 1)])
        return false;
    return PalindromeOrNot(i + 1, s);
}

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        cout << PalindromeOrNot(0, s) << " ";
    }
    return 0;
}