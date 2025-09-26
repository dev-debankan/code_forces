#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		long long n;
		cin >> n; 
		long long a[n];
		for (int i = 0; i < n; i++) 
			cin >> a[i];
		
		if (n % 2 == 0) {
			cout << 2 << endl; 
			cout << 1 << " " << n << endl; // Perform operation on the entire array
			cout << 1 << " " << n << endl; // Repeat the operation
		}
		else // If n is odd
		{
			cout << 4 << endl; 
			cout << 1 << " " << n - 1 << endl; // Perform operation on the first n-1 elements
			cout << 1 << " " << n - 1 << endl; // Repeat the operation
			cout << n - 1 << " " << n << endl; // Perform operation on the last two elements
			cout << n - 1 << " " << n << endl; // Repeat the operation
		}
	}
	return 0;
}


