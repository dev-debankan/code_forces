#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long count = 0;
        for (long long k = 0; k < 7; ++k) { // max 6 digits in n
            for (long long d = 1; d <= 9; ++d) {
                long long num = d * (long long)pow(10, k);
                if (num <= n) ++count;
            }
        }
        cout << count << endl;
    }
    return 0;
}