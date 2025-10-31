#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; // Number of test cases
	cin >> t;
	while (t--)
	{
		string s; // Binary string for each test case
		cin >> s;

		int count_of_one = 0; // Counter for '1's in the string
		int count_of_zero = 0; // Counter for '0's in the string

		// Loop through the string to count '0's and '1's
		for (int i = 0; i < s.length(); i++) // n
		{
			if (s[i] == '0')
				count_of_zero++; // Increment zero counter
			else
				count_of_one++; // Increment one counter
		}

		// Calculate the number of operations possible
		int operations = min(count_of_zero, count_of_one);

		// If the number of operations is odd, Alice wins
		if (operations % 2 != 0)
			cout << "DA" << endl;
		else
			cout << "NET" << endl; // If even, Bob wins
	}
	return 0;
}

// Time Complexity (TC): O(n) = O(100)
// Space Complexity (SC): O(n) = O(100)
