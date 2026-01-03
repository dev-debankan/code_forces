#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		string s;
		cin >> s; // Read the binary string for the current test case
		int n = s.size(); // Get the length of the string
		int count_of_0s = 0, count_of_1s = 0; // Initialize counters for '0's and '1's

		// Count the number of '0's and '1's in the string
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0')
				count_of_0s++;
			else
				count_of_1s++;
		}

		int length_of_t = 0; // Initialize the length of the resulting good string

		// Determine the maximum length of a good string that can be formed
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0' && count_of_1s > 0)
			{
				count_of_1s--; // Use a '1' to make a pair with '0'
				length_of_t++; // Increase the length of the good string
			}
			else if (s[i] == '1' && count_of_0s > 0)
			{
				count_of_0s--; // Use a '0' to make a pair with '1'
				length_of_t++; // Increase the length of the good string
			}
			else
			{
				break; // No more pairs can be formed
			}
		}

		// Output the minimum cost to make the string good
		cout << n - length_of_t << endl;
	}
	return 0;
}

// Time Complexity (TC): O(n) = O(2*10^5)
// Space Complexity (SC): O(n) = O(2*10^5)
