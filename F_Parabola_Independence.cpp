#include <bits/stdc++.h>
using namespace std;

struct Parabola {
    long long a, b;
    int id;
};

// Sort by b coordinate ascending
bool compareParabolas(const Parabola& p1, const Parabola& p2) {
    if (p1.b != p2.b) return p1.b < p2.b;
    return p1.a < p2.a;
}

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<Parabola> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i].a >> p[i].b;
        p[i].id = i;
    }

    sort(p.begin(), p.end(), compareParabolas);

    // Try finding longest chain with Increasing 'a'
    vector<int> dp_inc(n, 1);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            // Check monotonicity and independence condition
            // Condition: b_i - b_j >= (a_i - a_j)^2
            if (p[j].a <= p[i].a) {
                long long diff_a = p[i].a - p[j].a;
                long long diff_b = p[i].b - p[j].b;
                if (diff_b >= diff_a * diff_a) {
                    dp_inc[i] = max(dp_inc[i], dp_inc[j] + 1);
                }
            }
        }
    }

    // Try finding longest chain with Decreasing 'a'
    vector<int> dp_dec(n, 1);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (p[j].a >= p[i].a) {
                long long diff_a = p[i].a - p[j].a; // effectively |a_i - a_j|
                long long diff_b = p[i].b - p[j].b;
                if (diff_b >= diff_a * diff_a) {
                    dp_dec[i] = max(dp_dec[i], dp_dec[j] + 1);
                }
            }
        }
    }

    int ans = 0;
    for (int x : dp_inc) ans = max(ans, x);
    for (int x : dp_dec) ans = max(ans, x);

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}