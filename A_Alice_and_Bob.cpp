#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        vector<long long> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        cout<<a+1<<"\n";
    }
}