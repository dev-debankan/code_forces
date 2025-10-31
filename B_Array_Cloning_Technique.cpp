#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n;
		cin >> n; // Read the size of the array for the current test case
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) // Loop to read the elements of the array
			cin >> a[i];

		map<long long, long long> mp; // Map to store frequency of each element
		for (long long i = 0; i < n; i++) // Loop to populate the frequency map
			mp[a[i]]++; // Increment the frequency of the element

		long long current_highest_freq = 0;
		for (auto i : mp) // Loop to find the element with the highest frequency
			current_highest_freq = max(current_highest_freq, i.second);

		long long operations = 0; // Initialize the number of operations to zero
		while (current_highest_freq < n) // Continue until the highest frequency is less than the size of the array
		{
			operations++; // Increment operations for cloning the array
			if (current_highest_freq * 2 <= n)
			{
				operations += current_highest_freq; // Add operations for swapping all the copies
				current_highest_freq *= 2; // Double the current highest frequency
			}
			else
			{
				operations += n - current_highest_freq; // Add operations for swapping only the required copies
				current_highest_freq = n; // Set the highest frequency to the size of the array
			}
		}

		cout << operations << endl; // Output the number of operations for the current test case
	}
	return 0;
}

// Time Complexity (TC): O(nlog2(n)) = O(10^5*log2(10^5)) = O(2*10^6)
// Space Complexity (SC): O(n) = O(10^5)
