
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
void bubble_sort(int arr[], int n ){
    for(int i = n-1 ; i >= 0 ; i--){
        int didSwap =0;
        for(int j = 0; j <= i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j+1], arr[j]);
                didSwap++;
            }
        }
        if(didSwap == 0){
            break;
        }
        cout << "runs" << endl;
    }
}
void  insertion_sort(int arr[], int n){
    for(int i = 0;  i <= n-1; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
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
        insertion_sort(arr,n);
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}