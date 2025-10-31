#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()
using namespace std;

int solve() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    
    int ops = 0;
    while (s.length() < m) {
        s += s;
        ops++;
    }
    
    if (s.find(t) != string::npos) {
        return ops;
    }
    
    s += s;
    ops++;
    
    if (s.find(t) != string::npos) {
        return ops;
    }
    
    return -1;
}

int main() {
    
    int T;
    cin >> T;
    while (T--) {
        cout << solve() << endl;
    }
    return 0;
}
    

