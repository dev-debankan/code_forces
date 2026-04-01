#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    for (int i = 1; i <= 10; ++i) {
            int total_cost = i * k;
if (total_cost % 10 == 0 || total_cost % 10 == r) {
                cout << i << endl;
                break;
            }
        }
    
    return 0;
    }
















    