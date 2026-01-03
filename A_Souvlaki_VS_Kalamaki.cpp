#include<bits/stdc++.h>
using namespace std;
int main(){
      ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
     if (!(cin >> t)) return 0;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        bool b=true;
        for(int i=1;i+1<n;i+=2){
            
            
                if(a[i]!=a[i+1]) b=false;
                
            
        }
        if(b) cout<<"YES\n";
        else cout<<"NO\n";
    }
}