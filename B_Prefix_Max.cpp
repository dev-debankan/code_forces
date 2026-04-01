#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,popcnt")

#define int long long
#define endl '\n'
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pii>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define fst first
#define snd second
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define YN(x) cout << ((x) ? "YES" : "NO") << endl
#define let(n) int n; cin >> n;
#define let2(a, b) int a, b; cin >> a >> b;
#define let3(a, b, c) int a, b, c; cin >> a >> b >> c;
#define let4(a, b, c, d) int a, b, c; cin >> a >> b >> c>> d;
#define leta(arr, n) vi arr(n); for (int i = 0; i < (n); i++) cin >> arr[i];

const int INF = (int)4e18;
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;

int gcdll(int a, int b) { return b ? gcdll(b, a % b) : a; }
int lcmll(int a, int b) { return (a / gcdll(a, b)) * b; }

int modpow(int a, int b, int m = MOD) {
    int res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

void printa(const vi &a) {
    for (auto x : a) cout << x << ' ';
    cout << endl;
}

void solve() {
     int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    auto calc = [&](vector<int> &v) {
        int mx = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            mx = max(mx, v[i]);
            sum += mx;
        }
        return sum;
    };

    int ans = calc(a);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(a[i], a[j]);
            ans = max(ans, calc(a));
            swap(a[i], a[j]); // revert back
        }
    }

    cout << ans << '\n';
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}