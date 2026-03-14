
#include <bits/stdc++.h>
using namespace std;

void selection_Sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++) // till 2nd last index we have check
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[i])
            {
                mini = j; 
            }
            swap(arr[mini], arr[i]);
        }
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        selection_Sort(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}