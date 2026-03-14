
#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n ){
    for(int i = n-1 ; i >= 0 ; i--){
        int didSwap =0; // edge case 
        for(int j = 0; j <= i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j+1], arr[j]);
                didSwap++;
            }
        }
        if(didSwap == 0){ // check for the sorted array    
            break;
        }
         // cout << "runs" << endl; // checking
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
        bubble_sort(arr,n);
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}