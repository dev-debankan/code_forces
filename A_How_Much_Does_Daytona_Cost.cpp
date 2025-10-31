#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
       long long n,k;
        cin >> n >> k;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long num=0;
        for(int i=0;i<n;i++){
            if(a[i]==k){
                num=1;
                break;
            }
        }
        if(num) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
    return 0;
}
