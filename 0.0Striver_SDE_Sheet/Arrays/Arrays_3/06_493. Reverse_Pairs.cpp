#include<bits/stdc++.h>
using namespace std;


// but time limit exceded!
// class Solution {
// public:
//     int reversePairs(vector<int>& nums) {
//         int n = nums.size();
//         int count = 0;
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if ((long long)nums[i] > 2LL * nums[j]) {
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// }; 



// optimal 

class Solution {
public:
    void merge(vector<int>& arr, int low, int mid, int high) {

        vector<int> temp;
        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }
        // temp stores sorted elements starting from index 0
        // But in original array, we need to place them from index low → high
        // So we map:
        // temp[0] → arr[low]
        // temp[1] → arr[low+1]
        // ...
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }

    int countPairs(vector<int>& arr, int low, int mid, int high) {
        int right = mid + 1;
        int count = 0;
        for (int i = low; i <= mid; i++) {
            while (right <= high && arr[i] > 2LL * arr[right]) {
                right++;
                
            }
            count += (right - (mid + 1));
        }
        return count;
    }

    int merge_sort(vector<int>& arr, int low, int high) {
        int count = 0;
        if (low >= high)
            return count;
        int mid = (low + high) / 2;
        count += merge_sort(arr, low, mid);
        count += merge_sort(arr, mid + 1, high);
        count += countPairs(arr, low, mid, high);
        merge(arr, low, mid, high);
        return count;
    }

    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return merge_sort(nums, 0, n - 1);
    }
};