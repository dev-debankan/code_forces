#include<bits/stdc++.h>
using namespace std;    
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        int last=-1000000;
        for(int i=0;i<n;i++){
            if(s[i]=='0') continue;
            
            // If distance is too large, we MUST protect this one
            if(i-last>=k){
                count++;
            }
            
            // FIX: Always update 'last' when we see a '1'.
            // Whether we protected it or it was already safe, 
            // there is now a '1' at index i that protects future positions.
            last = i; 
        }
        cout<<count<<endl;
        
    }
}