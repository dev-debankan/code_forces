#include <bits/stdc++.h>
using namespace std;

// Function to calculate the minimum number of operations needed
// to make the number divisible by a given possible_value
int min_operations(string n, string possible_value)
{
	int operations = 0; // Initialize the operations counter
	int checker_index = possible_value.size() - 1; // Start from the last character of possible_value

	// Traverse the number from the end to the beginning
	for (int i = n.size() - 1; i >= 0; i--)
	{
		// Check if the current digit matches the current character in possible_value
		if (n[i] == possible_value[checker_index])
		{
			checker_index--; // Move to the next character in possible_value
			// If all characters in possible_value are matched, break the loop
			if (checker_index < 0)
				break;
		}
		else
			operations++; // Increment operations if current digit doesn't match
	}

	// If not all characters in possible_value are matched, set operations to INT_MAX
	if (checker_index >= 0)
		operations = INT_MAX;

	return operations; // Return the number of operations
}

int main()
{
	long long t; // Number of test cases
	cin >> t;

	while (t--)
	{
		string n; // Input number as a string
		cin >> n;

		// Possible endings for a number to be divisible by 25
		vector<string> possible_values = {"00", "25", "50", "75"};
		int ans = INT_MAX; // Initialize the answer with a large value

		// Check for each possible ending
		for (auto possible_value : possible_values)
			ans = min(ans, min_operations(n, possible_value)); // Find the minimum operations

		cout << ans << endl; // Output the result for the current test case
	}

	return 0;
}

// Time Complexity (TC): O(4*20) = O(80)
// Space Complexity (SC): O(20)
