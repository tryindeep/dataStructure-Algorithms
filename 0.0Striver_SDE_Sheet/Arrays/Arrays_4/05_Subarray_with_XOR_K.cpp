#include<bits/stdc++.h>
using namespace std;

int subarrayWithXORSumK(vector<int> a, int k){
    int xr = 0;
    map<int , int> mpp;
    mpp[xr]++;
    int cnt = 0 ;
    for(int i = 0 ; i < a.size() ; i++){
        xr = xr ^ a[i];
        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
 

int main (){
    int n ;
    cin >> n;
    
    vector<int> a(n);
    for(int i=0; i < n ; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    int res = subarrayWithXORSumK(a , k);
    cout << " subarray with XOR is : " << res;
    return 0;
}

// 

#include<bits/stdc++.h>
using namespace std;

int countSubarraysWithXorK(vector<int>& arr, int targetXor){
    int prefixXor = 0;
    map<int , int> xorFrequency;

    xorFrequency[0] = 1;  // base case

    int totalCount = 0;

    for(int i = 0 ; i < arr.size() ; i++){
        prefixXor=prefixXor ^ arr[i];

        int requiredXor = prefixXor ^ targetXor;

        totalCount += xorFrequency[requiredXor];

        xorFrequency[prefixXor]++;
    }

    return totalCount;
}
 

int main (){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int targetXor;
    cin >> targetXor;

    int result = countSubarraysWithXorK(arr, targetXor);

    cout << "Subarrays with XOR = " << targetXor << " : " << result;

    return 0;
}