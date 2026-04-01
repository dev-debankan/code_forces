#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int deletions = 0;

        for (auto &p : freq) {
            int x = p.first;     // value
            int f = p.second;    // frequency

            if (f >= x) {
                deletions += (f - x);
            } else {
                deletions += f;
            }
        }

        cout << deletions << "\n";
    }
    return 0;
}
