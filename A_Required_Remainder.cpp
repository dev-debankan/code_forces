#include <iostream>
using namespace std;

void solve() {
    int x, y, n;
    cin >> x >> y >> n;

    // Calculate the maximum k directly
    int k = (n - y) / x * x + y;
    
    cout << k << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}