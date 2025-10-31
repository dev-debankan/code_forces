#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        long long n;
            cin >> n;
            vector<int> a(n);
            int total_twos = 0;
            for (int i = 0; i < n; ++i) {
                cin >> a[i];
                if (a[i] == 2) ++total_twos;
            }
            int prefix_twos = 0;
            int answer = -1;
            for (int k = 0; k < n - 1; ++k) {
                if (a[k] == 2) ++prefix_twos;
                int suffix_twos = total_twos - prefix_twos;
                if (prefix_twos == suffix_twos) {
                    answer = k + 1; // 1-based index
                    break;
                }
            }
            cout << answer << endl;
        }
    return 0;
}
