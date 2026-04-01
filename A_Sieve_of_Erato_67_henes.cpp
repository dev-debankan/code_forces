#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;++i) cin>>a[i];
        bool flag1=false;
        bool flag2=false;
        for(int i=0;i<n;i++){
            if(a[i]==1) flag1=true;
            if(a[i]==67) flag2=true;
        }
        if(flag2) cout<<"YES\n";
        else cout<<"NO\n";
    }
}