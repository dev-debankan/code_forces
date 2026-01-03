#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int>a(n);
        for(int i=0;i<n;++i) cin>>a[i];
        int count=0;
        map<int ,int> mp;
        for(int i=0;i<n;++i) cin>>mp[a[i]];
        for(auto it :mp){
            if(it.first>it.second) count+=it.first-it.second;
            if(it.first<it.second) count+=it.second;
        }
        cout<<count<<endl;

    }
}