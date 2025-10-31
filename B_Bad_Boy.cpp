#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Read the number of test cases
	long long t;
	cin >> t;

	// Process each test case
	while (t--)
	{
		// Read the dimensions of the room (n, m) and Anton's position (i, j)
		long long n, m, i, j;
		cin >> n >> m >> i >> j;

		// Output the coordinates of the two yo-yos
		// Placing one yo-yo at the top-left corner (1, 1)
		// and the other at the bottom-right corner (n, m)
		cout << 1 << " " << 1 << " " << n << " " << m << endl;
	}

	return 0;
}

// Time Complexity (TC): O(1)
// Space Complexity (SC): O(1)
