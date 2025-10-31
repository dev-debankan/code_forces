#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
        int ans,z,o;
      ans=z=o=0;
      vector<int>a(n);
    
      for(int i=0;i<n;++i ) {
        cin>>a[i];
        if(a[i]==0) z++;
        else if(a[i]==1) o++;
        ans=ans+a[i];

      }
      ans=ans+min(z,o)*2-min(z,o);
      if(z>o) ans=ans+z-o;
      cout<<ans<<endl;

    }

}