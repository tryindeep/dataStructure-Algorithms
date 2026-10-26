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

template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
#ifndef ONLINE_JUDGE
    debug_stream << ' ' << H;
    dbg_out(T...);
#endif
}

#ifndef ONLINE_JUDGE
#define dbg(...)                                                               \
    debug_stream << '[' << __FILE__ << ':' << __LINE__ << "] ("               \
                 << #__VA_ARGS__ << "):",                                     \
        dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

typedef long long LL;

const LL MOD = 1000000007;
const LL MOD1 = 998244353;

struct Point {
    long long x;
    long long y;
    __int128 dist;
};

__int128 getDistance(Point p1, Point p2) {
    __int128 dx = p1.x - p2.x;
    __int128 dy = p1.y - p2.y;

    return dx * dx + dy * dy;
}

bool comp(Point a, Point b) {

    // Smaller distance first
    if (a.dist != b.dist) {
        return a.dist < b.dist;
    }

    // Smaller x first
    if (a.x != b.x) {
        return a.x < b.x;
    }

    // Smaller y first
    return a.y < b.y;
}

void solve() {

    int n;
    long long a, b;

    cin >> n >> a >> b;

    // Reference point
    Point ref;
    ref.x = a;
    ref.y = b;

    vector<Point> points(n);

    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;

        // Calculate distance from reference point
        points[i].dist = getDistance(points[i], ref);
    }

    sort(points.begin(), points.end(), comp);

    for (int i = 0; i < n; i++) {
        cout << points[i].x << " "
             << points[i].y << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;

    while (test--)
        solve();

    return 0;
}