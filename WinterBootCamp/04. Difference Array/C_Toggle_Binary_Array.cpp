#include <bits/stdc++.h>
using namespace std;
 
#ifndef ONLINE_JUDGE
static ofstream debug_stream("error.txt");
#endif
 
template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
    return os << '(' << p.first << ", " << p.second << ')';
}
template <typename T_container, typename T = typename enable_if<
                                    !is_same<T_container, string>::value,
                                    typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v) {
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
 
void dbg_out() {
#ifndef ONLINE_JUDGE
    debug_stream << endl;
#endif
}
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
#ifndef ONLINE_JUDGE
    debug_stream << ' ' << H;
    dbg_out(T...);
#endif
}
 
#ifndef ONLINE_JUDGE
#define dbg(...)                                                               \
    debug_stream << '[' << __FILE__ << ':' << __LINE__ << "] ("                \
                 << #__VA_ARGS__ << "):",                                      \
        dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
 

#define int long long 
 
void solve() {
    int n , q;
    cin >> n >> q;

    vector<int>arr (n + 2 ,0);
    vector<int>diff (n + 2 ,0);

    for(int i = 1; i <= n; i++){
    cin >> arr[i];
}
    
    // logic of differnce array
    for(int i = 0; i < q; i++){

        int l , r;
        cin >> l >> r  ;

        diff[l] += 1;
        diff[r+1] -= 1;
    }
    // prefix sum
    for(int i = 1; i <=n; i++){

        diff[i] += diff[i-1];
        if(diff[i] % 2 == 1){
            arr[i] = 1 - arr[i];
        }
    }

    // printing the array

    for(int i = 1; i <=n; i++){
        cout << arr[i] << " " ;
    }
    cout << '\n';
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(9);
    int test = 1;
    // cin >> test;
    while (test--)
        solve();
    return 0;
}