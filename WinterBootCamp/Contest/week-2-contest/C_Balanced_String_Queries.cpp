#include <bits/stdc++.h>
using namespace std;

/*
    Implement only the function below.
    s contains only '0' and '1', and its characters are numbered 1 to n.
    queries[k] = [L, R] asks whether the substring from character L to
    character R contains as many zeros as ones.
    For every query, in order, return whether that substring is balanced.
*/
vector<bool> balancedQueries(string& s, vector<vector<int>>& queries) {
    int n = s.size();

    // prefix[i] = number of 1s in s[0 ... i-1]
    vector<int> prefix(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + (s[i] == '1');
    }

    vector<bool> ans;

    for (auto& query : queries) {
        int L = query[0];
        int R = query[1];

        // Number of 1s in [L, R]
        int ones = prefix[R] - prefix[L - 1];

        // Number of elements in [L, R]
        int length = R - L + 1;

        // Number of 0s
        int zeros = length - ones;

        ans.push_back(ones == zeros);
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    vector<vector<int>> queries(q, vector<int>(2));
    for (int k = 0; k < q; k++) cin >> queries[k][0] >> queries[k][1];

    vector<bool> answer = balancedQueries(s, queries);
    for (bool ok : answer) cout << (ok ? "YES" : "NO") << '\n';

    return 0;
}