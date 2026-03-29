#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int i = m - 1;      // nums1's index (the actual nums)
        // int j = n - 1;      // nums2's index
        // int k = m + n - 1;  // nums1's index (the next filled position)

        // while (j >= 0)
        //   if (i >= 0 && nums1[i] > nums2[j])
        //     nums1[k--] = nums1[i--];
        //   else
        //     nums1[k--] = nums2[j--];

        int left = m - 1;
        int right = 0;
        while (left >= 0 && right < n) 
        {
            if (nums1[left] > nums2[right]) {
                swap(nums1[left], nums2[right]);
                left--, right++;
            } else {
                break;
            }
        }
        sort(nums1.begin(),nums1.begin()+m);
        sort(nums2.begin(), nums2.end());

        for (int i = 0; i < n; i++) 
        {
           nums1[m+i] = nums2[i];
        }
    }
};