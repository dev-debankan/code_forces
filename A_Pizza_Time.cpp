#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int ans=0;
    while(n>=3){
        int m1=n/3;
        ans+=m1;
        n=(n-(m1*2));
    }
    cout<<ans<<endl;
   }
}