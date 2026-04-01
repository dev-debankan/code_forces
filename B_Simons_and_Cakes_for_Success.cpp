#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       
            long long n;
            cin>>n;
            long long k=1;
           for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            k *= i;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        k *= n;
    }
    
    cout << k << "\n";
}
}
