#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n;
		cin >> n; // Read the length of the array for the current test case
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) // Read the elements of the array
			cin >> a[i];

		long long count_of_ones = 0; // Initialize counter for number of 1s
		long long count_of_zeros = 0; // Initialize counter for number of 0s
		for (long long i = 0; i < n; i++) // Count the number of 1s and 0s in the array
		{
			if (a[i] == 1)
				count_of_ones++;
			else if (a[i] == 0)
				count_of_zeros++;
		}

		// Calculate the number of nearly full subsequences
		// Each 0 can either be included or not, hence 2^count_of_zeros possibilities
		// Multiply by count_of_ones as each 1 can be the element that is removed to make the sum s-1
		long long ways = pow(2, count_of_zeros) * count_of_ones;
		cout << ways << endl; // Output the result for the current test case
	}
	return 0;
}

// Time Complexity (TC): O(n) = O(60)
// Space Complexity (SC): O(n) = O(60)
