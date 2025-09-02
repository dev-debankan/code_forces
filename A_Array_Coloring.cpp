#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count =0;
        vector<int>a(n);
        for(auto it:a) cin>>a[it];
        for(auto it: a){
            if(a[it]%2!=0) count+=a[it];

        }
        if(count%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

return 0;
}