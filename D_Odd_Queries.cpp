#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n, q;
		cin >> n >> q; // Read the number of elements in the array and the number of queries
		vector<long long> a(n);
		for (int i = 0; i < n; i++) // Read the array elements
			cin >> a[i];

		long long old_sum = 0;
		for (int i = 0; i < n; i++) // Calculate the sum of the original array
			old_sum += a[i];

		vector<long long> prefix_sum(n + 1, 0);
		for (int i = 1; i <= n; i++) // Compute prefix sums for the array
			prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];

		while (q--) // Process each query
		{
			long long l, r, k;
			cin >> l >> r >> k; // Read the query parameters
			// Calculate the sum of elements to be removed from the original array
			long long sum_to_remove = prefix_sum[r] - prefix_sum[l - 1];
			// Calculate the sum of elements to be added after setting the range to k
			long long sum_to_add = (r - l + 1) * k;
			// Calculate the new total sum after the hypothetical change
			long long total_sum = old_sum - sum_to_remove + sum_to_add;
			// Check if the new total sum is odd
			if (total_sum % 2 == 1)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}

// Time Complexity (TC): O(n + q) = O(2*10^5)
// Space Complexity (SC): O(n) = O(2*10^5)
