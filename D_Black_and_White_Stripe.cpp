#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n, k;
		cin >> n >> k; // Read the length of the stripe and the required consecutive black cells
		string s;
		cin >> s; // Read the stripe pattern consisting of 'W' and 'B'

		// Initialize a prefix sum array to count the number of 'W's up to each position
		vector<long long> prefix(n + 1, 0);
		for (int i = 0; i < n; i++)
			prefix[i + 1] = prefix[i] + (s[i] == 'W'); // Increment prefix sum if current cell is 'W'

		long long minimum_cells = INT_MAX; // Initialize the minimum cells to recolor to a large value
		// Iterate over each possible segment of length k
		for (int i = 0; i <= n - k; i++)
		{
			// Calculate the number of 'W's in the current segment of length k
			long long diff = prefix[i + k] - prefix[i];
			// Update the minimum cells to recolor if the current segment has fewer 'W's
			minimum_cells = min(minimum_cells, diff);
		}

		// Output the minimum number of cells to recolor for the current test case
		cout << minimum_cells << endl;
	}
	return 0;
}

// Time Complexity (TC): O(n) = O(2*10^5)
// Space Complexity (SC): O(n) = O(2*10^5)
