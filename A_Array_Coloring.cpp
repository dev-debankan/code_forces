#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> index(n+1);
        for(int i=0;i<n;i++){
            cin>>a[i];
            index[a[i]]=i;
        }
        int count=0;
         for (int x=1;x<n;x++) {
            if (abs(index[x]-index[x+1]) % 2 == 0) {
            count++; 
            }
        }
        if(count>0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    
    return 0;
}