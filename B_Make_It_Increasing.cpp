#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n;
		cin >> n; // Read the number of elements in the sequence
		vector<long long> a(n);
		for (int i = 0; i < n; i++) // Read the sequence of integers
			cin >> a[i];

		long long ans = 0; // Initialize the answer to count the number of operations
		for (int i = n - 2; i >= 0; i--) // Traverse the sequence from the second last element to the first
		{
			while (a[i] >= a[i + 1]) // While the current element is not less than the next element
			{
				ans++; // Increment the operation count
				a[i] /= 2; // Divide the current element by 2
				if (a[i] == 0) // If the current element becomes 0, break the loop
					break;
			}
			if (a[i] == 0 && a[i + 1] == 0) // If both current and next elements are 0, it's impossible to make the sequence strictly increasing
			{
				ans = -1; // Set answer to -1 indicating impossibility
				break;
			}
		}
		cout << ans << endl; // Output the result for the current test case
	}
	return 0;
}

// Time Complexity (TC): O(nlog2(2*10^9)) = O(30*31) = O(930) ~ 10^3
// Space Complexity (SC): O(n) = O(30)
