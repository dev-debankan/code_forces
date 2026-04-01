#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    int min_points = points[0];
    int max_points = points[0];
    int amazing_count = 0;

    for (int i = 1; i < n; ++i) {
        if (points[i] > max_points) {
            max_points = points[i];
            amazing_count++;
        } else if (points[i] < min_points) {
            min_points = points[i];
            amazing_count++;
        }
    }

    cout << amazing_count << endl;

    return 0;
}