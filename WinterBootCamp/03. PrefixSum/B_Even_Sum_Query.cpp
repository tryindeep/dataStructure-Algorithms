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
 
typedef long long LL;
const LL MOD = 1000000007;
const LL MOD1 = 998244353;
 
 
void solve() {
    int n;
    cin >> n;

    int A[n];

    for(int i = 0; i<n; i++){
        cin >> A[i];
    }

    long long  p[n];

    long long sum = 0;
    for(int i =0; i<n; i++){
        // imortant
        if(i % 2 == 1){
            sum += A[i];
            
        }else{
            sum += 0;
        }
        p[i]=sum;
    }

    int q;
    cin >> q;

    for(int i = 0 ; i < q; i++){

        int l , r;
        cin >> l >> r;

        l--;
        r--;

        if(l == 0){
            cout << p[r] <<'\n';
        }else{
            cout << (p[r] - p[l-1]) << '\n';
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(9);
    int test = 1;
    // cin >> test;
    while (test--)
        solve();
    return 0;
}