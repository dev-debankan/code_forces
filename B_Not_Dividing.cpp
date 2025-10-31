#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		int n;
		cin >> n; // Read the length of the array for the current test case
		vector<int> a(n);
		for (int i = 0; i < n; i++) // Read the array elements
			cin >> a[i];

		// First pass: Ensure no element is 1, as 1 can divide any number
		for (int i = 0; i < n; i++)
		{
			if (a[i] == 1)
				a[i]++; // Increment 1 to 2
		}

		// Second pass: Ensure a[i+1] is not divisible by a[i]
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i + 1] % a[i] == 0)
				a[i + 1]++; // Increment a[i+1] to break divisibility
		}

		// Output the modified array
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}

// Time Complexity (TC): O(n) = O(10^4)
// Space Complexity (SC): O(n) = O(10^4)
