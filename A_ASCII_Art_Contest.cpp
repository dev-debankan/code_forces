#include <bits/stdc++.h>
using namespace std;

int medianOfThree(int a, int b, int c) {
    if (a > b) {
        if (b > c) return b;
        else if (a > c) return c;
        else return a;
    } else {
        if (a > c) return a;
        else if (b > c) return c;
        else return b;
    }
}

int main() {
    int g, c, l;
    cin >> g >> c >> l;

    int high = max({g, c, l});
    int low  = min({g, c, l});

    if ((high - low) >= 10)
        cout << "check again\n";
    else
        cout << "final " << medianOfThree(g, c, l) << endl;
}
