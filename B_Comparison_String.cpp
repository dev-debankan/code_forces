#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; // Number of test cases
	cin >> t;
	while (t--)
	{
		long long n; // Length of the string s
		cin >> n;
		string s; // Input string consisting of '<' and '>'
		cin >> s;

		// Variables to track the longest contiguous substring of identical characters
		long long longest_substring_length = 1;
		long long current_substring_length = 1;

		// Iterate through the string to find the longest contiguous substring
		for (int i = 1; i < n; i++) // Loop through the string
		{
			if (s[i] == s[i - 1])
				current_substring_length++; // Increment length if current and previous characters are the same
			else
			{
				// Update the longest substring length if the current one is longer
				longest_substring_length =
					max(longest_substring_length, current_substring_length);
				current_substring_length = 1; // Reset current substring length
			}
		}

		// Final check to update the longest substring length
		longest_substring_length =
			max(longest_substring_length, current_substring_length);

		// Output the minimum cost, which is the length of the longest substring + 1
		cout << longest_substring_length + 1 << endl;
	}
	return 0;
}

// Time Complexity (TC): O(n) = O(100)
// Space Complexity (SC): O(n) = O(100)
