
#include <bits/stdc++.h>
using namespace std;



// fast power method // Binary exponential

long long power(int x, int n) {
    // Base case
    if (n == 0) {
        return 1;
    }

    // Recursive call
    long long smallAns = power(x, n / 2);

    long long ans;

    if (n % 2 == 1) {
        ans = smallAns * smallAns * x;
    } 
    else {
        ans = smallAns * smallAns;
    }

    return ans;
}

int main() {
    int x, n;
    cin >> x >> n;

    cout << power(x, n) << endl;

    return 0;
}
