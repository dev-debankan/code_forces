#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> f(n + 2);
        for (int i = 1; i <= n; i++) {
            cin >> f[i];
        }

        vector<ll> a(n + 2, 0);

        // Compute a[2] to a[n-1] using second difference
        for (int i = 2; i <= n - 1; i++) {
            a[i] = (f[i + 1] - 2LL * f[i] + f[i - 1]) / 2LL;
        }

        // Compute sum of known contributions for f(1) and f(n)
        ll sum_f1 = 0; // contribution to f(1) from i=2..n-1
        ll sum_fn = 0; // contribution to f(n) from i=2..n-1

        for (int i = 2; i <= n - 1; i++) {
            sum_f1 += a[i] * (i - 1);
            sum_fn += a[i] * (n - i);
        }

        // Let:
        // f(1) = a[2]*(1) + a[3]*(2) + ... + a[n]*(n-1)
        // => f(1) = sum_f1 + a[n]*(n-1)
        // f(n) = a[1]*(n-1) + a[2]*(n-2) + ... + a[n-1]*(1)
        // => f(n) = sum_fn + a[1]*(n-1)

        // Solve for a[1] and a[n]
        a[1] = (f[n] - sum_fn) / (n - 1);
        a[n] = (f[1] - sum_f1) / (n - 1);

        // Output the array a[1..n]
        for (int i = 1; i <= n; i++) {
            cout << a[i] << (i == n ? '\n' : ' ');
        }
    }

    return 0;
}
