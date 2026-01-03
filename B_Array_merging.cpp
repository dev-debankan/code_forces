#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n;
		cin >> n; // Read the length of arrays a and b

		// Read array a
		vector<long long> a(n);
		for (long long i = 0; i < n; i++)
			cin >> a[i];

		// Read array b
		vector<long long> b(n);
		for (long long i = 0; i < n; i++)
			cin >> b[i];

		// Vectors to store the longest subarray of equal values for each possible value in a and b
		vector<long long> longest_subarray_a(2 * n + 1, 0);
		vector<long long> longest_subarray_b(2 * n + 1, 0);

		long long counter = 1; // Counter to track the length of current subarray of equal values

		// Calculate the longest subarray of equal values in array a
		for (int i = 1; i < n; i++)
		{
			if (a[i] == a[i - 1])
				counter++;
			else
			{
				// Update the longest subarray length for the current value
				longest_subarray_a[a[i - 1]] = max(longest_subarray_a[a[i - 1]], counter);
				counter = 1; // Reset counter for the next sequence
			}
		}
		// Update for the last sequence in array a
		longest_subarray_a[a[n - 1]] = max(longest_subarray_a[a[n - 1]], counter);

		counter = 1; // Reset counter for array b

		// Calculate the longest subarray of equal values in array b
		for (int i = 1; i < n; i++)
		{
			if (b[i] == b[i - 1])
				counter++;
			else
			{
				// Update the longest subarray length for the current value
				longest_subarray_b[b[i - 1]] = max(longest_subarray_b[b[i - 1]], counter);
				counter = 1; // Reset counter for the next sequence
			}
		}
		// Update for the last sequence in array b
		longest_subarray_b[b[n - 1]] = max(longest_subarray_b[b[n - 1]], counter);

		long long max_freq = -1; // Variable to store the maximum length of subarray of equal values

		// Calculate the maximum length of subarray of equal values across both arrays
		for (int i = 1; i <= 2 * n; i++)
			max_freq = max(max_freq, longest_subarray_a[i] + longest_subarray_b[i]);

		cout << max_freq << endl; // Output the result for the current test case
	}
	return 0;
}

// Time Complexity (TC): O(n) ~ O(2*10^5)
// Space Complexity (SC): O(n) ~ O(2*10^5)
