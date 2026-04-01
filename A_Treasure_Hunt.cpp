#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,a;
        cin>>x>>y>>a;
        long long rem=a%(x+y);
        if(rem<x) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
