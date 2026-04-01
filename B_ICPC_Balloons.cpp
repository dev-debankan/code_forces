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
        map<char,int>mp;
        for(char c:s) mp[c]++;

        int baloons=0;
        for(auto it:mp){
            if(it.second==1)baloons+=2;
            else if(it.second>1)baloons +=(it.second+1);
        }

        cout<<baloons<<endl;


    }
}