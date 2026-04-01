#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        long long ans=0;
        if(x>y){
            swap(a,b);
            swap(x,y);
        }
        if(k>=a){
            long long cnt=(k-a)/x+1;
            ans+=cnt;
            k-=cnt*x;
        }
        if(k>=b){
            long long cnt=(k-b)/y+1;
            ans+=cnt;
        }
        cout<<ans<<"\n";
    }
}
