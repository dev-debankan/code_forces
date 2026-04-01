#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int num=0;
        if(a<b) num++;
        if(a<c) num++;
        if(a<d) num++;
        cout<<num<<endl;
    }
}