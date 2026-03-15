// #include <iostream>
// using namespace std;

// int fib(int n)
// {
//     if (n <= 1)
//         return n;
//     return (fib(n - 1) + fib(n - 2));
// }

// int fib2(int n)
// {
//     int p1 = 1, p2 = 0;
//     for (int i = 2; i <= n; i++)
//     {
//         int curr = p1 + p2;
//         p2 = p1;
//         p1 = curr;
      
//     }
//     return p1;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     // cout << fib(n);
//     cout << fib2(n);
//     return 0;
// }