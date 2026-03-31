#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int low, int mid, int high)
{
    int cnt = 0;
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        // right smaller
        else
        {
            temp.push_back(arr[right]);
            cnt += (mid - left+1);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    //
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    return cnt;
}
int merge_sort(vector<int> &arr, int low, int high)
{
    int cnt = 0;
    if (low >= high)
        return cnt;
    int mid = (low + high) / 2;
    cnt += merge_sort(arr, low, mid);
    cnt += merge_sort(arr, mid + 1, high);
    cnt  += merge(arr, low, mid, high);
    return cnt;
}
int numberOfInversions(vector<int> &arr, int n)
{
    return merge_sort(arr, 0, n - 1);

}


int main()
{
    // Input array
    vector<int> a = {5, 4, 3, 2, 1};
    int n = a.size();

    // Count inversions
    int cnt = numberOfInversions(a, n);

    cout << "The number of inversions are: " << cnt << endl;

    return 0;
}