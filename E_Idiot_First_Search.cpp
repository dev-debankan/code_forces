#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 300005;

// Global arrays to prevent stack overflow/allocation issues
vector<int> adj[MAXN];
long long sz[MAXN];
long long ans[MAXN];
int L[MAXN], R[MAXN];

// 1. Calculate Subtree Sizes
void dfs_size(int u) {
    sz[u] = 1;
    if (L[u] != 0) {
        dfs_size(L[u]);
        sz[u] += sz[L[u]];
    }
    if (R[u] != 0) {
        dfs_size(R[u]);
        sz[u] += sz[R[u]];
    }
}

// 2. Push Answers Down (Top-Down DP)
void dfs_solve(int u) {
    if (L[u] != 0) {
        // Ans(child) = Ans(parent) + EscapeCost(child)
        long long escape_cost = (2 * sz[L[u]] - 1) % MOD;
        ans[L[u]] = (ans[u] + escape_cost) % MOD;
        dfs_solve(L[u]);
    }
    if (R[u] != 0) {
        long long escape_cost = (2 * sz[R[u]] - 1) % MOD;
        ans[R[u]] = (ans[u] + escape_cost) % MOD;
        dfs_solve(R[u]);
    }
}

void solve() {
    int n;
    if (!(cin >> n)) return;

    // Reset for each test case
    // Note: only clearing used indices for O(N) performance
    for(int i=1; i<=n; ++i) {
        L[i] = 0; R[i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        cin >> L[i] >> R[i];
    }

    // Step 1: Get sizes
    dfs_size(1);

    // Step 2: Calculate Root Answer
    ans[1] = (2 * sz[1] - 1) % MOD;

    // Step 3: Propagate to children
    dfs_solve(1);

    // Output results
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << "\n";
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