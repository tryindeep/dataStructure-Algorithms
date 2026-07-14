class solution {

    int Power(long long mid , int n , int m ){
        long long ans = 1;
        for(int i=0; i < n ; i++){
            ans *= mid;
            if(ans > m) return 2; 
        }
        if(ans == m ) return 1;
        return 0; 
    }
    public: 
    int nthRoot(int n , int m ){
        if(m == 0) return 0;
        if(n == 1) return m;
        
        long long low = 1;
        long long high = m;
        
        while(low <= high){
            long long mid = low + (high - low )/2;

            int res = Power(mid, n, m);
            if(res == 1) return (int)mid;
            else if(res == 0 ) return low = mid +1;
            else return high = mid -1;
        }

        return -1;
    }
};



#include <bits/stdc++.h>
using namespace std;
        
class Solution {
public:
    // Function to find N-th root of M using binary search
    int nthRoot(int n, int m) {
        // Set low and high for binary search
        int low = 1, high = m;

        // Start binary search
        while (low <= high) {
            // Calculate mid
            int mid = (low + high) / 2;

            // Store result of mid^n
            long long ans = 1;
            for (int i = 0; i < n; i++) {
                ans *= mid;
                if (ans > m) break;
            }

            // If mid^n equals m
            if (ans == m) return mid;

            // If mid^n is less than m
            if (ans < m) low = mid + 1;

            // If mid^n is more than m
            else high = mid - 1;
        }

        // Return -1 if not found
        return -1;
    }
};

// Main function
int main() {
    Solution obj;
    int result = obj.nthRoot(3, 27);
    return 0;
}




// class Solution {
// public:
//     // 0 -> mid^n < m, 1 -> == m, 2 -> > m
//     int power(long long mid, int n, long long m) {
//         long long ans = 1;
//         for (int i = 0; i < n; i++) {
//             ans *= mid;
//             if (ans > m) return 2; // early stop
//         }
//         if (ans == m) return 1;
//         return 0;
//     }

//     int nthRoot(int n, int m) {
//         if (m == 0) return 0;
//         if (n == 1) return m;

//         long long low = 1, high = m;

//         while (low <= high) {
//             long long mid = low + (high - low) / 2;

//             int res = power(mid, n, m);

//             if (res == 1) return (int)mid;
//             else if (res == 0) low = mid + 1;
//             else high = mid - 1;
//         }

//         return -1;
//     }
// };