#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> rn;
        int count=1;
        while(n>0){
            int ln=n%10;
            if(ln!=0){
                rn.push_back(ln*count);
            }
            n/=10;
            count*=10;
        }
        cout<<rn.size()<<endl;
        for(int i=0;i<rn.size();i++){
            cout<<rn[i]<<" ";
        }
        cout<<"\n"<<endl;
    }
    
    return 0;
}