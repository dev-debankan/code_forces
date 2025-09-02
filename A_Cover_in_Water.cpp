#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        bool three_emptycell=false;
        int count_empty_cell=0;
        for(int i=0;i<n;i++){
           if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n &&s[i+2]=='.'){
            three_emptycell=true;
            break;

           }
            if (s[i]=='.') count_empty_cell++;

        }
        if(three_emptycell){
            cout<<2<<endl;
        }
        else cout<< count_empty_cell<<endl;
    }
return 0;
}

