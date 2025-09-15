#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int count=0;
        int maxc=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) {count++;
                maxc=max(maxc,count);
            }
            else count=0;
            
        }
        cout<<maxc<<endl;
       
        }
}