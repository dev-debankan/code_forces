#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n,j,k;
        cin>>n>>j>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int min =INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]<min){
                min=a[i];
            }
            

        }
        if(min==a[j-1]) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
    }
}