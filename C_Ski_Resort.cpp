#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n, k, q;
		cin >> n >> k >> q; // Read n (number of days), k (minimum days for vacation), q (max comfortable temperature)
		vector<long long> a(n);
		for (int i = 0; i < n; i++) // Iterate over each day
		{
			cin >> a[i]; // Read the temperature for each day
			// Mark the day as 1 if temperature is <= q, otherwise 0
			a[i] = (a[i] > q) ? 0 : 1;
		}

		long long count_of_1s = 0; // To count consecutive days with temperature <= q
		long long ways = 0; // To store the number of valid vacation periods
		for (int i = 0; i < n; i++) // Iterate over the days again
		{
			if (a[i] == 1)
				count_of_1s++; // Increment count if the day is valid
			else
			{
				// If a sequence of valid days ends, calculate possible vacation periods
				if (count_of_1s >= k)
				{
					long long diff = count_of_1s - k + 1;
					ways += (diff * (diff + 1)) / 2; // Add the number of ways for this sequence
				}
				count_of_1s = 0; // Reset the count for the next sequence
			}
		}
		// Check for any remaining sequence at the end of the array
		if (count_of_1s >= k)
		{
			long long diff = count_of_1s - k + 1;
			ways += (diff * (diff + 1)) / 2;
		}
		
		cout << ways << endl; // Output the number of ways for this test case
	}
	return 0;
}

// Time Complexity (TC): O(n) = O(2*10^5)
// Space Complexity (SC): O(n) = O(2*10^5)
