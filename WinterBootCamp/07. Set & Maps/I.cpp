#include <bits/stdc++.h>
using namespace std;

// #pragma GCC optimize("O3,unroll-loops")   // optional; skip "target" pragmas, they can break on some judges

/* ----------------------------- type aliases ----------------------------- */
using ll   = long long;
using ull  = unsigned long long;
using i128 = __int128_t;
using ld   = long double;
using pii  = pair<int, int>;
using pll  = pair<ll, ll>;
using vi   = vector<int>;
using vll  = vector<ll>;
using vvi  = vector<vi>;
using vvll = vector<vll>;
using vpii = vector<pii>;

/* -------------------------------- macros -------------------------------- */
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x)   int((x).size())
#define pb      push_back
#define eb      emplace_back
#define F       first
#define S       second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)   // [a, b)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i) // [a, b) reversed

/* ------------------------------- constants ------------------------------ */
constexpr ll MOD  = 1'000'000'007;
constexpr ll MOD1 = 998'244'353;
constexpr ll INF  = 1'000'000'000'000'000'000LL;  // 1e18, safe to add two of them in ll
constexpr int INFI = 1'000'000'000;                // 1e9
constexpr ld EPS  = 1e-9;
constexpr int dx[] = {0, 1, 0, -1, 1, 1, -1, -1};
constexpr int dy[] = {1, 0, -1, 0, 1, -1, 1, -1};

/* --------------------------------- debug --------------------------------- */
// Active locally, compiled out on Codeforces (it defines ONLINE_JUDGE).
// Usage: dbg(x, v, mp);  -> appends to error.txt
#ifndef ONLINE_JUDGE
static ofstream dbg_stream("error.txt");

// forward declarations so nested types (vector<pair<int,vector<int>>>, ...) resolve
template <class A, class B> ostream &operator<<(ostream &, const pair<A, B> &);
template <class... Ts> ostream &operator<<(ostream &, const tuple<Ts...> &);
template <class T, class = decltype(begin(declval<const T &>())),
          class = enable_if_t<!is_convertible_v<const T &, string_view>>>
ostream &operator<<(ostream &, const T &);

template <class A, class B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
    return os << '(' << p.first << ", " << p.second << ')';
}
template <class... Ts>
ostream &operator<<(ostream &os, const tuple<Ts...> &t) {
    os << '(';
    apply([&](const auto &...xs) {
        size_t i = 0;
        ((os << (i++ ? ", " : "") << xs), ...);
    }, t);
    return os << ')';
}
template <class T, class, class>
ostream &operator<<(ostream &os, const T &v) {
    os << '{';
    const char *sep = "";
    for (const auto &x : v) os << sep << x, sep = ", ";
    return os << '}';
}

void dbg_out() { dbg_stream << endl; }
template <class H, class... T>
void dbg_out(const H &h, const T &...t) {
    dbg_stream << ' ' << h;
    dbg_out(t...);
}
#define dbg(...) (dbg_stream << '[' << __LINE__ << "] (" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__))
#else
#define dbg(...) ((void)0)
#endif

/* ------------------------------- utilities ------------------------------- */
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

// anti-hack hash for unordered_map / unordered_set:  unordered_map<ll, int, custom_hash> m;
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED);
    }
};

template <class T> bool chmin(T &a, const T &b) { return b < a ? (a = b, true) : false; }
template <class T> bool chmax(T &a, const T &b) { return a < b ? (a = b, true) : false; }

template <class T> T ceil_div(T a, T b) { return a / b + ((a % b != 0) && ((a < 0) == (b < 0))); }
template <class T> T floor_div(T a, T b) { return a / b - ((a % b != 0) && ((a < 0) != (b < 0))); }

ll power(ll a, ll b, ll m = MOD) {
    ll r = 1 % m;
    a %= m; if (a < 0) a += m;
    for (; b > 0; b >>= 1, a = a * a % m)
        if (b & 1) r = r * a % m;
    return r;
}
ll inv(ll a, ll m = MOD) { return power(a, m - 2, m); }  // m must be prime

// read vectors:  vi a(n); cin >> a;
template <class T> istream &operator>>(istream &is, vector<T> &v) { for (auto &x : v) is >> x; return is; }

void yes(bool b = true) { cout << (b ? "YES" : "NO") << '\n'; }

/* --------------------------------- solve --------------------------------- */
void solve() {
    int n, x;
    cin >> n >> x;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    set<int> st;
    bool found = false;

    for(int i = 0; i < n; i++){

        int required = x - a[i];

        if(st.find(required) != st.end()){
            found = true;
            break;
        }

        st.insert(a[i]);
    }

    if(found){
        cout << "TRUE" << endl;
    }else{
        cout << "FALSE" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(10);

    int t = 1;
    // cin >> t;               // comment out for single-test problems
    while (t--) solve();
    return 0;
}