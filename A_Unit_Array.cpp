#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
        cin >> n;
        vector<int> a(n);
        int cntNeg = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == -1) cntNeg++;
            sum += a[i];
        }

        int ops = 0;

        // Step 1: If product is -1, flip one -1
        if (cntNeg % 2 == 1) {
            ops++;
            sum += 2;  // flipping -1 → +1 increases sum by 2
            cntNeg--;
        }

        // Step 2: Fix sum if negative
        if (sum < 0) {
            int need = (-sum + 1) / 2; // ceil((-sum)/2)
            ops += need;
            sum += 2 * need;
            cntNeg -= need;
        }

        // Step 3: After fixing sum, ensure product = 1
        if (cntNeg % 2 == 1) ops++;

        cout << ops << "\n";
    }
}