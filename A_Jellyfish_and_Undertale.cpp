#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		long long a, b, n;
		
		cin >> a >> b >> n;
		long long x[n];
		
		for (int i = 0; i < n; i++)
			cin >> x[i];

		
			long long maximum_time = b;
		// Calculate the maximum time by adding the minimum of each tool's increment and (a-1)
		for (int i = 0; i < n; i++)
			maximum_time += min(x[i], a - 1);

		// Output the maximum time until the bomb explodes
		cout << maximum_time << endl;
	}
	return 0;
}


