#include <iostream>
using namespace std;

void revOfArr(int i, int arr[], int n)
{
    if ( i >= n/2  ) return; // base line if it crossed the middle line then its true

    swap(arr[i] , arr [n-i-1]); 

    revOfArr(i+1,arr,n);
}

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        revOfArr(0, arr, n); // index number , array , number of array elements
        
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
