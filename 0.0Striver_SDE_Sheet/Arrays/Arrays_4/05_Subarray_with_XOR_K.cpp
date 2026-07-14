#include<bits/stdc++.h>
using namespace std;

int subarrayXorK(vector<int>& arr, int k) {
    unordered_map<int, int> mp;
    mp[0] = 1;          // base case: empty prefix

    int prefixXor = 0;
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefixXor ^= arr[i];

        // if (prefixXor ^ k) exists in map, those subarrays end here
        if (mp.find(prefixXor ^ k) != mp.end()) {
            count += mp[prefixXor ^ k];
        }

        mp[prefixXor]++;
    }

    return count;
}