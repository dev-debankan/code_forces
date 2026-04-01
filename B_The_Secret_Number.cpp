#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
   cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> ans;

        long long pow10 = 10;
        for (int k = 1; k <= 18; k++) {
            long long d = pow10 + 1;
            if (d > n) break;

            if (n % d == 0) {
                long long x = n / d;
                if (x > 0) ans.push_back(x);
            }
            pow10 *= 10;
        }

        sort(ans.begin(), ans.end());

        if (ans.empty()) {
            cout << 0 << "\n";
        } else {
            cout << ans.size() << "\n";
            for (auto x : ans) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}