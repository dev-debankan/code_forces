#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    if (n <= 2) {
        cout << 0 << "\n";
        return;
    }

    // Prefix maximums: max element from index 0 to i
    vector<int> pref_max(n);
    pref_max[0] = a[0];
    for (int i = 1; i < n; i++) {
        pref_max[i] = max(pref_max[i - 1], a[i]);
    }

    // Suffix maximums: max element from index i to n-1
    vector<int> suff_max(n);
    suff_max[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suff_max[i] = max(suff_max[i + 1], a[i]);
    }

    int operations = 0;
    // An element can be removed if it's "trapped" 
    // between two values larger than itself.
    for (int i = 0; i < n; i++) {
        if (a[i] < pref_max[i] && a[i] < suff_max[i]) {
            operations++;
        }
    }

    cout << operations << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}