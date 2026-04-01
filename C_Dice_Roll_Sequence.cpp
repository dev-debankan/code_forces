#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int operations = 0;
    for (int i = 0; i < n - 1; i++) {
       
        if (a[i] == a[i+1] || a[i] + a[i+1] == 7) {
            operations++;
           
            i++; 
        }
    }
    cout << operations << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}