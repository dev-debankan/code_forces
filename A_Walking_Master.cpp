#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if( d<b){
            cout<< -1<< endl;
            continue;}
          int moves=d-b;
          a+=moves;

            if(a<c){
                cout<< -1<<endl;
                continue;
            }
            moves+=(a-c);
            cout<< moves<< endl;

        
    }
    return 0;
}