#include<bits/stdc++.h>
using namespace std;
bool same(vector<int>&a,int n){
    bool b=false;
    int temp=a[0];
    for(int i=1;i<n;i++){
        if(a[i]==temp) b=true;
        else{
            b=false;
            break;
        }
    }
    return b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>b(n);
        int count=0;
        for(int i=0;i<n;i++) cin>>b[i];
       if (same(b,n)) cout<<1<<endl;
       else{
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[b[i]]++;
        }
        cout<<m.size()<<endl;
       }

    }
}