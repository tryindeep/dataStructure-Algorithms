#include <bits/stdc++.h>
using namespace std;

/*
    Implement only the function below.
    Positions are numbered 1 to n: a[i - 1] is the element at position i.
    The element at position i (1 < i < n) is a critical point if it is greater
    than both of its neighbours or smaller than both of them.
    queries[k] = [L, R] asks how many critical points are at positions i with
    L < i < R. Return the answer for every query, in order.
*/
vector<int> countCriticalPoints(vector<int>& a, vector<vector<int>>& queries) {
      int n = a.size();

    // prefix[i] = number of critical points in positions 1...i
    vector<int> prefix(n + 1, 0);

    for (int i = 2; i <= n - 1; i++) {
        prefix[i] = prefix[i - 1];

        if ((a[i - 1] > a[i - 2] && a[i - 1] > a[i]) ||
            (a[i - 1] < a[i - 2] && a[i - 1] < a[i])) {
            prefix[i]++;
        }
    }

    // Position n carries the same count as position n-1
    prefix[n] = prefix[n - 1];

    vector<int> answer;

    for (auto& query : queries) {
        int L = query[0];
        int R = query[1];

        if (L == R) {
            answer.push_back(0);
        } else {
            // Strictly inside: L < i < R
            answer.push_back(prefix[R - 1] - prefix[L]);
        }
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<vector<int>> queries(q, vector<int>(2));
    for (int k = 0; k < q; k++) cin >> queries[k][0] >> queries[k][1];

    vector<int> answer = countCriticalPoints(a, queries);
    for (int x : answer) cout << x << '\n';

    return 0;
}