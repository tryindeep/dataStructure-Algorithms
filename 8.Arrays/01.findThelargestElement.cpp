#include <bits/stdc++.h>
using namespace std;

// -----------------Brute force----------------------- 
int  findLargestElementBruteForce (vector<int> &arr){
    sort(arr.begin() , arr.end());
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        findLargestElementBruteForce(arr);
        cout << arr[n-1];
    }
    return 0;
}

// TC => Sorting that's why => (N log N),
// SC => if quicksort => o(1)



//-----------------Optimal--------------------------- 
int findLargestElementOptimal(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int res = findLargestElementOptimal(arr, n);
        cout << "largest is  element is  : " << res;
    }
    return 0;
}

// TC = O(n); 
// SC = O(1)