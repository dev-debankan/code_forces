#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        for(int i=0;i<n;i++){
            int pos=i;
            for(int j=i;j<n;j++){
                if(a[j]>a[pos]) pos=j;
            }
            if(pos!=i){
                reverse(a.begin()+i,a.begin()+pos+1);
                break;
            }
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
