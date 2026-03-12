/*
 C++ STL Divided into 4 parts

 Algoorithms
 Containers
 Functions
 Iteration

*/

// #include <iostream>
// using namespace std;

// // Pair
// void explainPair (){

//     pair <int , int > p1 = {1 , 3};
//     cout << p1.second << " " << p1.first << endl;
//     pair <int , pair< int,int >> p2 = {34 ,{45,12}};
//     cout <<  p2.second.second << " " <<p2.second.first << endl;
//     pair<int, int > arr[] = {{1,3},{5,7},{9,11}};
//     cout << arr[1].second<< endl;
// }

// int main()
// {
//     explainPair();
//     return 0;
// }

//    Recursion ?
// --> When a function calls itself. Until a specified
//     condition met.

#include <iostream>
using namespace std;

// bool PalindromeOrNot(int i, string &s)
// {
//     if ( i >= s.size()/2 )
//         return true;
//     if (s[i] != s[(s.size() - i - 1)])
//         return false;
//     return PalindromeOrNot(i + 1, s);
// }

// int main()
// {

//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         string s;
//         cin >> s;
//         cout << PalindromeOrNot(0, s) << " ";
//     }
//     return 0;
// }

int fib(int n)
{
    if (n <= 1)
        return n;
    return (fib(n - 1) + fib(n - 2));
}
int fib2(int n)
{
    if (n <= 1)
        return n;
    int p2 = 0, p1 = 1;
    for (int i = 2; i <= n; i++)
    {
        int curr = p1 + p2;
        p2 = p1;
        p1 = curr;
    }
    return p1;
}
int main()
{
    int n;
    cin >> n;
    // cout << fib(n);
    cout << fib2(n);
    ;
    return 0;
}