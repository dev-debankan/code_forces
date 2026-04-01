#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> req(10,0), freq(10,0);
        req[0]=3; req[1]=1; req[2]=2; req[3]=1; req[5]=1;
        int ans=0;
        for(int i=0;i<n;i++){
            freq[a[i]]++;
            bool ok=true;
            for(int d=0;d<=9;d++){
                if(freq[d]<req[d]){
                    ok=false;
                    break;
                }
            }
            if(ok){
                ans=i+1;
                break;
            }
        }
        cout<<ans<<"\n";
    }
}
