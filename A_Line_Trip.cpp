#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
    long long n, x;
    cin >> n >> x;

    vector<long long> points_arr;
    points_arr.push_back(0);  // starting point

    // take inputs
    for (int i = 0; i < n; i++) {
        long long point;
        cin >> point;
        points_arr.push_back(point);
    }

    points_arr.push_back(x);  // ending point
    n = points_arr.size();    // total size of array

    long long max_distance_between_points = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (i == n - 1) {
            // for the last segment, check doubled distance
            max_distance_between_points = max(
                max_distance_between_points,
                2 * (points_arr[i] - points_arr[i - 1])
            );
        } else {
            // normal case
            max_distance_between_points = max(
                max_distance_between_points,
                points_arr[i] - points_arr[i - 1]
            );
        }
    }

    cout << max_distance_between_points << endl;
    }
    return 0;
}
