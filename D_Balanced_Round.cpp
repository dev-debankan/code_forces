#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n, k;
		cin >> n >> k; // Read the number of problems and the maximum allowed difference
		vector<long long> a(n);
		for (int i = 0; i < n; i++) // Read the difficulty of each problem
			cin >> a[i];

		// Sort the array to arrange problems by difficulty
		sort(a.begin(), a.end());

		long long counter = 1; // Initialize counter for the current sequence length
		long long largest_length = 1; // Initialize the largest sequence length found
		for (int i = 1; i < n; i++) // Iterate through the sorted difficulties
		{
			// Check if the current problem can be part of the current sequence
			if (a[i] - a[i - 1] <= k)
				counter++; // Increment the sequence length
			else
				counter = 1; // Reset the sequence length
			// Update the largest sequence length found
			largest_length = max(largest_length, counter);
		}

		// Output the minimum number of problems to remove
		cout << n - largest_length << endl;
	}
	return 0;
}

// Time Complexity (TC): O(nlog2(n)) = O(2*10^5*log2(2*10^5)) = O(4*10^6)
// Space Complexity (SC): O(n) = O(2*10^5) = O(10^6)
