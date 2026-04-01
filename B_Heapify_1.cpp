#include <bits/stdc++.h>
using namespace std;


int get_odd_seed(int x) {
    while (x % 2 == 0) {
        x /= 2;
    }
    return x;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool possible = true;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        
       
        int current_index = i + 1;
        int value = a[i];

        // Check if the value and its position share the same odd seed
        if (get_odd_seed(current_index) != get_odd_seed(value)) {
            possible = false;
        }
    }

    if (possible) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}