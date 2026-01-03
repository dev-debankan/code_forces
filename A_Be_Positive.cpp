#include<bits/stdc++.h>
using namespace std;
int count0 (vector<int>&a, int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) count++;
    }
    return count;
}
int countn1(vector<int>&a , int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]<0) count++;
    }
    return count;
}
int main(){
      ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
     if (!(cin >> t)) return 0;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int c0=count0(a,n);
        int cn1=countn1(a,n);
        if(cn1%2==0) cout<<c0<<endl;
        else cout<<c0+2<<endl;
    }
}
