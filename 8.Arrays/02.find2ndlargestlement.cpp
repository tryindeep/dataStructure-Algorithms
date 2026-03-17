#include <bits/stdc++.h>
using namespace std;


// ---------------------brute force-----------------------
int secondLargest1 (vector<int> &arr, int n ){
    sort(arr.begin() , arr.end());
    int largest = arr[n-1];
    int second_Largest =-1 ;
    for(int i = n-2 ; i >= 0; i++){
        if(arr[i] != largest){
            second_Largest = arr[i];
            break;
        }
    }
    return second_Largest;
}
// TC => o( NlogN + N )
// Sc => o(n)

// ---------------- better --------------------
int secondLargest2(vector<int> &arr , int n){
    // largest
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    // second largest
    int second_largest = INT_MIN;
    for(int i = 0; i < n ; i++){
        if(arr[i] > second_largest && arr[i] != largest ){
            second_largest = arr[i];
        }
    }
    return second_largest;
}
// TC => o(n+n) => o(2n)
// SC => o(n)

// ---------------- Optimal -------------------
int secondLargest3(vector<int> &arr , int n){
    int largest = arr[0];
    int second_Largest = INT_MIN;
    for (int i = 0; i < n ; i ++){
        if(arr[i] > largest ){
            second_Largest = largest;
            largest =  arr[i];
        }
        else if(arr[i] < largest && arr[i] > second_Largest ){
            second_Largest = arr[i];
        }
    }
    return second_Largest;
}
// TC => O(n)
// O => O(n)



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
        
        int res = secondLargest3(arr, n);
        cout << "Second largest is  element is  : " << res;
    }
    return 0;
}