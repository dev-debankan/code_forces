#include<bits/stdc++.h>
using namespace std;
int main(){
    
        int n;
        cin>>n;
        int k;
        cin>>k;
        int mins=240-k;
        int sum=0;
        int res=0;
        for(int i=1;i<=n;i++){
            sum+=5*i;
            if(sum<=mins){
                res++;
            }
            else{
                break;
            }
        }
        cout<<res<<endl;
    
}