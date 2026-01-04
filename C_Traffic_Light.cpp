#include <bits/stdc++.h>
using namespace std;;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
         s+=s;
         n*=2;
        if (n==1) cout<<0<<endl;
long long last_green_index = -1;
		long long max_seconds = INT_MIN;
        for(int i=n-1;i>=0;i--){

            if (s[i] == 'g'){
				last_green_index = i;
            }
                if (s[i] == c)
			{
				long long difference = last_green_index - i;
				// Update the maximum wait time
				max_seconds = max(max_seconds, difference);
			}

        }
        	cout << max_seconds << endl;
    }
}