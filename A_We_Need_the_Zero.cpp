#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        long long total=0;
        for(int i=0;i<n;i++) total^=a[i];
        if(n%2==1) cout<<total<<endl;
        else{
            if(total==0) cout<<total<<endl;
            else cout<< -1<<endl;
        }
    }
}