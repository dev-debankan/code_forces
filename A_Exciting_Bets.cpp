#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n;
		cin >> n; // Read the length of the sequence for the current test case
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) // Read the sequence of numbers
			cin >> a[i];

		long long total_and = a[0]; // Initialize total_and with the first element of the sequence
		for (long long i = 1; i < n; i++) // Compute the bitwise AND for the entire sequence
			total_and &= a[i];

		cout << total_and << endl; // Output the minimal value of the maximum value in the sequence
	}
	return 0;
}

// Time Complexity (TC): O(n) = O(100)
// Space Complexity (SC): O(n) = O(100)
