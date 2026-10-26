#include <bits/stdc++.h>
using namespace std;

/*
    Implement only the function below.
    Return the number of pairs (l, r) with 0 <= l <= r < n and
    colours[l] == colours[r]. A piece made of a single bead counts.
*/
long long countPrettyPieces(vector<int>& colours) {
    unordered_map<int, long long> freq;
    long long ans = 0;

    for (int x : colours) {
        ans += freq[x] + 1;
        freq[x]++;
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> colours(n);
    for (int i = 0; i < n; i++) cin >> colours[i];

    cout << countPrettyPieces(colours) << '\n';

    return 0;
}