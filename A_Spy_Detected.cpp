#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n; cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        map<int,int> freq;
        for(int i=0;i<n;i++) freq[a[i]]++;
        int id=0;
        for(auto it : freq){
            if(it.second==1){
                id=it.first;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==id){
                cout<<i+1<<"\n";
                break;
            }
        }
    }

}