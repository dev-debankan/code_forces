#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n, k;
		cin >> n >> k; // Read the values of n and k for each test case
		vector<long long> v(n * k); // Initialize a vector to store n*k integers
		for (int i = 0; i < n * k; i++) // Loop to read n*k integers into the vector
			cin >> v[i];

		long long pointer = n * k; // Initialize pointer to the end of the vector

		long long sum = 0; // Initialize sum to store the sum of medians
		while (k--) // Loop k times to calculate the sum of medians
		{
			pointer -= (n / 2 + 1); // Move the pointer to the median position of the current subarray
			sum += v[pointer]; // Add the median value to the sum
		}
		cout << sum << endl; // Output the sum of medians for the current test case
	}
	return 0;
}

// Time Complexity (TC): O(n*k) = O(2*10^5)
// Space Complexity (SC): O(n*k) = O(2*10^5)
