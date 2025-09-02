#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) cin>> a[i];

    long long Min=INT_MAX;
    for (int i=0;i<n;i++){
        Min=min(Min,abs(a[i]));
    }
    cout<<Min<<endl;
    return 0;

}