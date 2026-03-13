#include <iostream>
using namespace std;
 // golbally til 10e8 works
int main()
{
    
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre-compute
    int hash[13] = {0}; // size depends on questions it will be mentioned.
                        // [1000000] // till 10e6. 10e7 won't work
                       
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }
    return 0;
}


// -=---------------------------using map-------------------------

// #include <bits/stdc++.h>
// using namespace std;
// // uses map because we need check more than 10e7 elements
// int main()
// {

//     int n;
//     cin >> n;
//     int arr[n];
//     map<int, int> mpp;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         mpp[arr[i]]++;
//     }

//     // precomputaion can be done while taking the inout
//     // precompute
//     // map<int ,int> mpp;
//     // for (int i = 0; i < n ; i ++){
//     //     mpp[arr[i]]++;
//     // }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int number;
//         cin >> number;
//         // fetch
//         cout << mpp[number] << endl;
//     }
//     return 0;
// }