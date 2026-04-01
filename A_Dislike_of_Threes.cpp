#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> seq;
    for (int i = 1; seq.size() < 1000; i++) {
        if (i % 3 != 0 && i % 10 != 3) {
            seq.push_back(i);
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << seq[k - 1] << endl;
    }
    return 0;
}