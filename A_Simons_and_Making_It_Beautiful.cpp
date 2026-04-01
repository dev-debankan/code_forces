#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max_idx = 0;
        vector<int>a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if (a[i] == n) {
            max_idx = i;
        }
        }
        swap(a[0], a[max_idx]);
      for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
  


    }
}