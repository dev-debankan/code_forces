#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l1,b1,l2,b2,l3,b3;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;
         int S = max({l1, l2, l3, b1, b2, b3});
        bool ok = false;

        if (l1 == S && l2 == S && l3 == S && b1 + b2 + b3 == S) ok = true;
        if (b1 == S && b2 == S && b3 == S && l1 + l2 + l3 == S) ok = true;
        if (b1 == S && l2 == S - l1 && l3 == S - l1 && b2 + b3 == S) ok = true;
        if (l1 == S && b2 == S - b1 && b3 == S - b1 && l2 + l3 == S) ok = true;

        cout << (ok ? "YES" : "NO") << "\n";

    }
}