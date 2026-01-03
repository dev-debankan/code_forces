#include <iostream>

using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long sum = a + b + c;

    // Condition 1: Total sum must be divisible by 3
    if (sum % 3 != 0) {
        cout << "NO" << endl;
        return;
    }

    long long target = sum / 3;

    
    if (b > target) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
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