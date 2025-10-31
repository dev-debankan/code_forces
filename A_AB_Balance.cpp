#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		string s;
		cin >> s; // Read the input string for each test case
		int n = s.size(); // Get the size of the string

		// Check if the first and last characters of the string are different
		if (s[0] != s[n - 1])
		{
			// If the first character is 'a', change it to 'b'
			if (s[0] == 'a')
				s[0] = 'b';
			else
				// Otherwise, change it to 'a'
				s[0] = 'a';
		}

		cout << s << endl; // Output the modified string
	}
	return 0;
}

// Time Complexity (TC): O(n) = O(100)
// Space Complexity (SC): O(n) = O(100)
