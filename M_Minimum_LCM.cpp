#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n;
		cin >> n; // Read the integer n for the current test case

		// Initialize ans_a and ans_b with default values
		long long ans_a = 1;
		long long ans_b = n - 1;

		// Iterate over possible factors of n up to sqrt(n)
		for (long long fac = 2; fac * fac <= n; fac++)
		{
			// Check if fac is a factor of n
			if (n % fac == 0)
			{
				// If fac is a factor, set ans_a to n / fac
				ans_a = n / fac;
				// Set ans_b to n - ans_a
				ans_b = n - ans_a;
				// Break the loop as we found a valid pair
				break;
			}
		}

		// Output the result for the current test case
		cout << ans_a << " " << ans_b << endl;
	}
	return 0;
}

// Time Complexity (TC): O(sqrt(10^9)) = O(10^4)
// Space Complexity (SC): O(1)
