#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; // Read the number of test cases

	while (t--)
	{
		long long n;
		cin >> n; // Read the total number of wheels for the current test case

		// If the number of wheels is less than 4 or odd, it's impossible to form buses
		if (n < 4 || n % 2 == 1)
			cout << -1 << '\n'; // Output -1 indicating no valid configuration
		else
		{
			// Using a different formula for ceil to avoid floating point operations
            // in C++20 (GCC 13-64) version
			
			// Calculate the minimum number of buses using 6-wheel buses
            long long min_buses = (n + 5) / 6; // integer ceil of n/6
			
			// Calculate the maximum number of buses using 4-wheel buses
            long long max_buses = n / 4;       // integer floor of n/4

			// Output the minimum and maximum number of buses
			cout << min_buses << " " << max_buses << '\n';
		}
	}

	return 0;
}

// Time Complexity (TC): O(1)
// Space Complexity (SC): O(1)
