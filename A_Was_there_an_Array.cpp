#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        // The array b has length n-2
        int m = n - 2;
        vector<int> b(m);
        
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        bool possible = true;
        
        // Iterate up to m-2 to avoid going out of bounds
        // We are checking for the pattern: 1 0 1
        for (int i = 0; i < m - 2; i++) {
            if (b[i] == 1 && b[i+1] == 0 && b[i+2] == 1) {
                possible = false;
                break;
            }
        }

        if (possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}