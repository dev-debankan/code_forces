#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int it : a) {
            if (it % 2 != 0) count += it;
        }
        if (count % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}