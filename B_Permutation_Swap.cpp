#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; 
	while (t--)
	{
		int n;
		cin >> n; 
		vector<int> a(n);
		for (int i = 0; i < n; i++) // Read the permutation elements
			cin >> a[i];
		
		
		int k = abs(a[0] - 1);
		for (int i = 1; i < n; i++) // Iterate over the permutation
		{
			// Update k to be the gcd of current k and the absolute difference between
			// the current element and its sorted position
			k = gcd(k, abs(a[i] - (i + 1)));
		}
		
		cout << k << endl;
	}
	return 0;
}

// T
