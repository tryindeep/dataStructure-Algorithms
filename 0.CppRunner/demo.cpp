#include <iostream>
using namespace std;


void pattern22(int n)
{
    for (int i = 0 ; i < 2*n-1 ; i++)
    {
        for (int j = 0 ; j< 2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n-1-1) - j;
            int down = (2*n-1-1) - i;

            cout << (n - min(min(top, down), min(right, left))) << " ";
        }
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
        pattern22(n);
    }
}
