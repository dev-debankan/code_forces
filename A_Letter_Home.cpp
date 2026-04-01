#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int L=a[0];
        int R=a[n-1];
        int ans=(R-L)+min(abs(s-L),abs(s-R));
        cout<<ans<<"\n";
    }
}
