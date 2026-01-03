#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n;
		cin >> n; // Read the length of the permutation
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) // Read the permutation
			cin >> a[i];

		int flag = 0; // Flag to check if a valid triplet is found
		for (int j = 1; j < n - 1; j++) // Iterate over possible middle elements
		{
			int i = -1; // Initialize i to an invalid index
			int k = -1; // Initialize k to an invalid index
			for (int left = 0; left < j; left++) // Find a valid i
			{
				if (a[left] < a[j])
				{
					i = left;
					break;
				}
			}
			for (int right = j + 1; right < n; right++) // Find a valid k
			{
				if (a[right] < a[j])
				{
					k = right;
					break;
				}
			}
			if (i != -1 && k != -1) // Check if both i and k are valid
			{
				cout << "YES" << endl;
				cout << i + 1 << " " << j + 1 << " " << k + 1 << endl; // Output the indices
				flag = 1; // Set flag to indicate a valid triplet is found
				break;
			}
		}
		if (flag == 0) // If no valid triplet is found
			cout << "NO" << endl;
	}
	return 0;
}

// Time Complexity (TC): O(n^2) = O(10^6)
// Space Complexity (SC): O(n) = O(1000)
